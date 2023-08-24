#include<stdio.h>

void main()
{
   int a[3] = {1, 2, 3};
   int *p ;
   
   for (int i = 0; i < 3; i++)
   {
p= &a[i];    
   
  printf("%d %p", *p, p);
      p++;
   }
}