#include<stdio.h> 
#include<conio.h> 
void main(){ 
    int a,b,c; 
    printf("enter the first number"); 
    scanf("%d", &a); 

    printf("enter the second number"); 
    scanf("%d", &b); 
    
    printf("enter the third number");
    scanf("%d", &c); 
    
    if (a>b && a>c)       { 
        printf("first number entered is the greatest"); 
    }
    else if (b>c && b>a)  { 
        printf("second number entered is the greatest"); 
    } 
    else if (c>a && c>b)  { 
        printf("third number entered is the greatest");
    }
    else if (a==b && a>c)  { 
        printf("first two numbers entered are equal and they are greater than the third one");
    } 
    else if (a==b && a<c)  { 
        printf("first two numbers entered are equal but they are lesser than the third number entered"); 
    } 
    else if (a==c && a>b)  { 
        printf("first and third numbers enterd are equal and they are greater than the second number entered");
    } 
    else if (a==c && a<b)  { 
        printf("first and third numbers entered are equal but they are lesser than the second number entered");
    } 
    else if (b==c && b>a)  {
        printf("second and third numbers entered are equal and they are greater than the first number entered");
    } 
    else if (b==c && b<a)  {
        printf("second and third numbers entered are equal but they are lesser than the first number entered");
    } 
    else if (a==b && b==c) { 
        printf("all numbers entered are equal");
    } 
    else {
        printf("input is invalid with respect to the program");
    } 
        getch(); 
}