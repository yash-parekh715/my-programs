//program to find area of circle, rectangle and square using function calling

// #include<stdio.h>
// #include<math.h>
// void rectanglearea(float a, float b);
// void circlearea(float r);
// void squarearea(float n);
// void main(){
//     char y=0; do{
//     float a, b, n, r;
//     char x;
//     printf("enter the shape whose area you wanna calculate(s,c,r):- ");
//     scanf("%s", &x);
//    switch(x){
//      case 's': squarearea(n);
//             break;
//      case 'c': circlearea(r);
//             break;
//      case 'r': rectanglearea(a,b);
//             break;
//    }
//     printf("\ndo you want to run the program again?(y for yes and n for no):- ");
//     scanf("%s", &y);
//  }
//  while(y=='y' || y=='Y');
// }
// void squarearea(float n){
//      printf("enter the side of the square:- ");
//      scanf("%f", &n);
//      printf("the area of the square is:- %f", pow(n,2));
// }
// void circlearea(float r){
//      printf("enter the radius of the circle:- ");
//      scanf("%f", &r);
//      printf("the area of the circle is:- %f", 3.14*(pow(r,2)));
// }
// void rectanglearea(float a, float b){
//      printf("enter the length of the rectangle:- ");
//      scanf("%f", &a);
//      printf("enter the breadth of the rectangle:- ");
//      scanf("%f", &b);
//      printf("the area of the rectangle is:- %f", a*b);
// }

//program for swapping variables using function calling

#include<stdio.h>
int swap(int a, int b);
void main(){
     int a, b;
     printf("enter the first number:- ");
     scanf("%d", &a);
     printf("enter the second number:- ");
     scanf("%d", &b);
      swap(a,b);
}
int swap(int a, int b){
     int temp=a;
          a=b;
          b=temp;
     printf("the swapped values are %d and %d", a,b);
}