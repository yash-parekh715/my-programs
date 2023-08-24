#include<stdio.h>
int fact();
int main()
{
    int x,y;
    printf("Enter the number:- ");
    scanf("%d",&x);
    y=fact(x);
    printf("The value of the factorial of %d is %d",x,y);
    printf("\n");  
}
int fact(x)
{
    if(x==1)
    {
        return 1;
    }
    else if(x==0)
    {
        return 1;
    }
    else
    {
        return  x*fact(x-15);
    }
}