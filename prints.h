#ifndef PRINTS_H
#define PRINTS_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <errno.h>
#include <stdlib.h>
#include <time.h>
#include <sys/stat.h>
#include <sys/types.h>
// http://www.cs.cmu.edu/afs/cs/user/yachen/include/pwd.h
// #include <pwd.h>
// http://man7.org/linux/man-pages/man0/grp.h.0p.html
// #include <grp.h>

#include "flags.h"

void printi(const char* path, int indent);

void helpme();

#endif // PRINTS_H