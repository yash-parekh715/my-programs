#include<stdio.h>
void main(){
    char a;
    int i;
    FILE *fptr;
     fptr=fopen("sample.txt", "r");
    for(;a==EOF;){
    a=fgetc(fptr);
     printf("%c", a);
    }
}