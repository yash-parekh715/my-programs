#include<stdio.h>

void main(){
 char ch;
	printf("enter the letter :- ");
	scanf("%c", &ch);
  switch(ch){
   case 'a' : printf("it is a vowel.");
	   break;
   case 'e' : printf("it is a vowel.");
      break;
   case 'i'	: printf("it is a vowel");
	   break; 
   case 'o' : printf("it is a vowel");
	   break;
   case 'u' : printf("it is a vowel");
	   break;
   case 'A' : printf("it is a vowel");
	   break;
   case 'E' : printf("it is a vowel");
	   break;
   case 'I' : printf("it is a vowel");
	   break;
   case 'O' : printf("it is a vowel");
	   break;
   case 'U' : printf("it is a vowel");
	   break;
   default : {
      if(ch>=48 || ch<=57){
              printf("you entered a number");
      } 
      else{
              printf("it is a consonant");
   } 
   }
  }
}