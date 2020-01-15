#ifndef PRINTS_H
#define PRINTS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <string.h>
#include <dirent.h>
#include <errno.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
// http://www.cs.cmu.edu/afs/cs/user/yachen/include/pwd.h
// #include <pwd.h>
// http://man7.org/linux/man-pages/man0/grp.h.0p.html
// #include <grp.h>

#include "flags.h"

int isdir(const char* path);

void catenater(int* marker, const char* datum);

void printi(const char* path, const char* fname, int indent);

void printe();

void filesystem(const char* path, int indent);

void helpme();

#endif // PRINTS_H