#include<stdio.h>
#include<conio.h> 
 
void main()  { 
	int a; 
	printf("enter your age:"); 
        scanf("%d", &a); 
 if(a>=18)    { 
	printf("you are eligible for voting"); 
} 
 else if(a<0) { 
	printf("The input is invalid"); 
} 
 else         {
	printf("you are not yet eligible for voting"); 
} 
getch(); 
}