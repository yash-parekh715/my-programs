#include<stdio.h>
void main(){
    int a,b,c;
    a=0;
    printf("enter the number :- ");
    scanf("%d", &c);
    b=c;
    while(b!=0){
        a=a*10;
        a=a + b%10;
        b=b/10;
    }
    if(a==c){
        printf("it is a palindrome");
    }
    else{
        printf("it is not palindrome");
    }
}