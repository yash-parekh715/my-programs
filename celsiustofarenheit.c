#include<stdio.h>
#include<conio.h>

void main() 
{ 
 float c, f;
	  
		printf("enter the temperature in celsius:-"); 
		scanf("%f", &c);
			f=1.8*c+32;
		printf("the temperature in farenheit is :- %f\n", f);
		printf("enter the temperature in farenheit :- ");
		scanf("%f", &f);
			c=0.556*f-17.778;
		printf("the temperature in celsius is :- %f", c);
getch(); 
} 
