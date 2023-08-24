#include<stdio.h>
#include<conio.h> 
void main(){
    float r, a, s, l, b, p, k; 
     printf("enter the side of the square (in cm) :- ");
     scanf("%f", &a); 
    p=4*a;
        printf("the perimeter of the square is :- %f\n", p); 
    k=a*a; 
        printf("the area of the square is :- %f\n", k);
     printf("enter the length and breadth of rectangle (in cm) :- "); 
     scanf("%f%f", &l, &b);
    p=2*l+2*b;
        printf("the perimeter of the rectangle is :- %f\n", p);
    k=l*b; 
        printf("the area of the rectangle is :- %f\n", k); 
     printf("enter the radius of the circle (in cm) :- ");
     scanf("%f", &r); 
    p=2*3.14*r;
        printf("the circumferece of the circle is :- %f\n", p);
    k=3.14*r*r;
        printf("the area of the circle is :- %f\n", k);
    getch();
     }
     
     