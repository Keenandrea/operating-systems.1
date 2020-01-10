#include "prints.h"

void helper()
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