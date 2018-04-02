#include <stdlib.h>

int main()
{
  char *x =  malloc(10);
  char y='a';
  x[10] = 'a';
  std::cout<<sizeof(y);
  free(x);
  return 0;
}
