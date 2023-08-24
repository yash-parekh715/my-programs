//fibonacci series 
#include<stdio.h>
void main(){
    int a,b,i,j,n; 
    a=0;
    b=1;
    j=a+b;
      printf("enter the number of terms:- ");
      scanf("%d", &n);
      printf("\n the fibonacci series is:- %d %d", a,b);
      for(i=0; i<=n; i++){
        a=b;
        b=j;
        j=a+b;
            printf(" %d ", j);
      } 
      }