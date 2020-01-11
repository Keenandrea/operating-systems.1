#include "prints.h"

int isdir(const char* path)
{
    /* on linux, stat struct is defined as follows:
    dev_t     st_dev;      id of th file device
    ino_t     st_ino;      inode number
    mode_t    st_mode;     file's type and mode
    nlink_t   st_nlink;    number of hard links
    uid_t     st_uid;      the user ID of owner
    gid_t     st_gid;      th group ID of owner
    dev_t     st_rdev;     device ID if special
    off_t     st_size;     total size, in bytes */
    struct stat stats;

    if(stat(path, &stats) == -1)
    {
        return 0;
    } else {
        return S_ISDIR(stats.st_mode);
    }
}

void printi(const char* path, int indent)
{
    /* on linux, dirent struct is defined as follows:    
    ino_t          d_ino;       inode number
    off_t          d_off;       offset to next dirent
    unsigned short d_reclen;    length of this record
    unsigned char  d_type;      file type
    char           d_name[256]; file name          */
    struct dirent *de = NULL;
    DIR *dr = NULL;

    /* returns DIR pointer */
    if(!(dr = opendir(path)))
    {
        perror("error");
        return;
    }

    while( (de = readdir(dr) ) != NULL)
    {
        if(isdir(path))
        {
            printf("%s\n", de->d_name);
        }
    }
closedir(dr);
}

void helpme()
{
    printf("\n|HELP|MENU|");
    printf("\t-h : display help menu\n");
    printf("\t-I <n> : change indentation to <n> spaces for each level\n");
    printf("\t-L : follow symbolic links, if any. default does not follow symbolic links\n");
    printf("\t-t : print information on file type\n");
    printf("\t-p : print permission bits\n");
    printf("\t-i : print the number of links to file in inode table\n");
    printf("\t-u : print the UID associated with the file\n");
    printf("\t-g : print the GID associated with the file\n");
    printf("\t-s : print the size of file in bytes\n");
    printf("\t-d : show the time of last modification\n");
    printf("\t-l : print information on file as if options t p i u g s are all specified\n");
}