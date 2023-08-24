#include<stdio.h>
void main(){
    FILE *fp;
    fp =fopen("sample.txt", "w");
     fprintf(fp, "hello world");
    fclose(fp);
}