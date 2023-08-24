#include<stdio.h>
#include<conio.h>

void main(){ 

	float h, m, x, y; 
printf("enter the time in hours:-");
scanf("%f", &h);
	m=h*60;
printf("the time in minutes is :- %f\n", m);
printf("enter the time in minutes :- ");
scanf("%f", &x);
	y=x/60;
printf("the time in hours is :- %f", y);			
getch();
}    