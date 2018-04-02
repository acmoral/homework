#include <stdio.h>

int main()
{
  int x;
  x=0;
  printf ("x = %d\n", x);


  int i, j;
  j=0;
  int a[10]={1};
  int b[10]={2};
  for ( i = 0; i < 10; i++ )
    {
      j += a[i];
    }
  if ( j == 77 ) 
    {
      printf("hello there\n");
    }
  
}
