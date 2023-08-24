#include<stdio.h>
#include<conio.h>
void main() {
 
    int first, second, add, subtract, multiply, divide; 
    		printf("enter both the integers:-");
    		scanf("%d%d", &first, &second);
   	add = first + second;
   	subtract = first - second;
   	multiply = first*second;
    divide =  first/(float)second;
    	printf("addition = %d\n", add);
		printf("difference = %d\n", subtract);
		printf("product = %d\n", multiply); 
		printf("division = %d\n", divide);
	getch();
}