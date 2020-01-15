#include "prints.h"

int main(int argc, char *argv[])
{
    init();
    int it;
    int ch;

    while( (ch = getopt(argc,argv,"hI:Ltpiugsdl")) != -1 )
    {
        switch(ch)
        {
            case 'h':
                helpme();
                return 0;
            case 'I':
                optI = 1;
                indents = optarg;
                if(indents != NULL)
                {
                    indent_convert = atoi(indents);
                }
                if(indents == NULL)
                {
                    return -1;
                }
                break;
            case 'L':
                optL = 1;
                break;
            case 't':
                optt = 1;
                break;
            case 'p':
                optp = 1;
                break;
            case 'i':
                opti = 1;
                break;
            case 'u':
                optu = 1;
                break;
            case 'g':
                optg = 1;
                break;
            case 's':
                opts = 1;
                break;
            case 'd':
                optd = 1;
                break;
            case 'l':
                optl = 1;
                tpiugs();
                break;
            /* if getopt() finds      
               an option charact
               er in argv that w
               as not included i
               n optstring, or i
               f it detects a mi
               ssing option argu
               ment, it returns
               '?' and sets the 
               external variable
               optopt to the act
               ual option char*/
            case '?': 
                if(optopt = 'I')
                {
                    printf("dt: missing argument <n> number of indent spaces.\n");
                    exit(0);
                }
                break;
        }
    }
    
    char cwd[PATH_MAX];

    if(argv[optind] != NULL)
    {
        dirname = argv[optind];
    }
    if(dirname == NULL)
    {
       if(getcwd(cwd, sizeof(cwd)) != NULL)
       {
           dirname = cwd;
       } else {
           perror("error");
           exit(0);
       }
    }
    //printf("dirname: %s", dirname);

    filesystem(dirname, 0);

    return 0;
}