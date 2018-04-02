#include <stdlib.h>
int main()
{
  char *x = malloc(100); /* or, in C++, "char *x = new char[100] */
  free(x);
  return 0;
}
