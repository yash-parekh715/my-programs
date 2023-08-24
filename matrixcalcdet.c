#include<stdio.h>
void main(){
    int ch;
    do{
    int i,j,r,c;
    int arr[100][100];
     printf("enter the number of rows :- ");
     scanf("%d", &r);
     printf("enter the number of columns :- ");
     scanf("%d", &c);
     printf("enter the elements of matrix :- \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
     printf("[%d] [%d]:- ", i+1, j+1);
     scanf("%d", &arr[i][j]);
        }
    }
     printf("the matrix is\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
     printf("%d ", arr[i][j]);
        }
     printf("\n");
    }
    if(r==2 && c==2){
        printf("the determinant of the entered matrix is:- %d", (arr[0][0]*arr[1][1]-arr[0][1]*arr[1][0]));
    }
    else if(r==3 && c==3){
        printf("the determinant of entered matrix is:- %d", (arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1])));
    } 
    else{
        printf("enter a valid square matrix\n");
    }
   }
    while(ch=='y'|| ch=='Y');
        printf("do you want to continue calculating determinants?? (Y for yes and N for no) :- ");
        scanf("%s", &ch);
}