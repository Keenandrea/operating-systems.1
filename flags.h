#ifndef FLAGS_H
#define FLAGS_H

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/* explanation of opt[I-l] 
   can be found in file na
   med flags.c          */
extern int optI; 
extern int optL; 
extern int optt; 
extern int optp; 
extern int opti; 
extern int optu;
extern int optg;
extern int opts;
extern int optd;
extern int optl;

extern int indent_convert; 
extern char* indents; 
extern char* dirname; 

void init();
void tpiugs();

#endif // FLAGS_H