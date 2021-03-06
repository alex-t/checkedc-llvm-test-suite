/* For copyright information, see olden_v1.0/COPYRIGHT */

#include <stdchecked.h>
#pragma BOUNDS_CHECKED ON

unchecked extern int atoi(const char *);

int NumNodes = 1;

unchecked int dealwithargs(int argc, array_ptr<char*> argv : count(argc)) {
  int level;

  if (argc > 1)
    level = atoi(argv[1]);
  else
    level = 64;

  return level;
}
