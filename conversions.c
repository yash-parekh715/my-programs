#include<stdio.h>
#include<conio.h>

void main(){ 

float d,r,g,kg, mb, kb; 
	printf("enter the value of money in dollars :- ");
	scanf("%f", &d);
 r=48*d;
	printf("the value of money in rupees is :- %f\n", r);
	printf("enter the weight in grams :- ");
	scanf("%f", &g);
 kg=g/1000;
	printf("the weight in kilograms is :- %f\n", kg);
	printf("enter the memory in kilobytes :- ");
	scanf("%f", &kb);
 mb=kb/1024;
	printf("the memory in megabytes is :- %f\n", mb);
getch();
}