#include<stdio.h>
#include<conio.h>
void main(){
char a;
    printf("enter the number from 1-7 :- ");
    scanf("%c", &a);
switch(a){
    case '1' : printf("today is monday");
         break;
    case '2' : printf("today is tuesday");
        break;
    case '3' : printf("today is wednesday");
        break;
    case '4' : printf("today is thursday");
        break;
    case '5' : printf("today is friday");
        break;
    case '6' : printf("today is saturday");
        break;
    case '7' : printf("today is sunday");
        break;
    default : printf("please enter a valid number");
        break;
}
getch();
}