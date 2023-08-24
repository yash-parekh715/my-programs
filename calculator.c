#include<stdio.h> 
#include<conio.h>
#include<math.h>
void main(){ 
int a, b, c;
        printf("enter the first number :- ");
        scanf("%d", &b);
        printf("enter the second number :- ");
        scanf("%d", &c);
        printf("enter a number from 1-6 :- ");
    scanf("%d", &a);
switch(a){
    case 1 :- printf("the sum is %d", b+c);
        break;
    case 2 :- printf("the difference is %d", b-c);
        break;
    case 3 :- printf("the product is %d", b*c);
        break;
    case 4 :- printf("the division is %d", b/c);
        break;
    case 5 :- printf("the remainder is %d", b%c);
        break;
    case 6 :- printf("a^b %d", pow(b,c));
        break;
    default :- printf("enter the valid input");
        break;
}
getch();
}