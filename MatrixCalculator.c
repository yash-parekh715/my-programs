#include<stdio.h> 
   void main(){
    char ch;
    do{
      int rows, cols, a;
      printf("enter the number of rows:- ");
      scanf("%d", &rows);
      printf("enter the number of cols:- "); 
      scanf("%d", &cols);
    int arr1[rows][cols], arr2[rows][cols], mult[rows][cols], sum[rows][cols], diff[rows][cols];
      for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
         printf("enter no.[%d][%d]:- ", i,j);
         scanf("%d", &arr1[i][j]);}             
         }
         printf("the first matrix is\n");
      for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
          printf("%d ", arr1[i][j]);
        }
          printf("\n");
      }
        printf("enter any number from 1,2 and 3:- ");
        scanf("%d", &a);
      
      for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
         printf("enter no.[%d][%d]:- ", i,j);
         scanf("%d", &arr2[i][j]);
         }             
         }
          printf("the second matrix is\n");
         for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
          printf("%d ", arr2[i][j]);
        }
          printf("\n");
         }
      switch(a){
        case 1: {
          for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
              sum[i][j]=arr1[i][j]+arr2[i][j];
            }
          }
          printf("the addition of matrix is\n");
          for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
          printf("%d ", sum[i][j]);
        }
          printf("\n");
         }
        }
                break;
        case 2: {
          for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
              diff[i][j]=arr1[i][j]-arr2[i][j];
            }
          }
          printf("the subtraction of the matrix is :-\n");
          for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
          printf("%d ", diff[i][j]);
        }
          printf("\n");
         }
        }
                break;
        case 3: {
          for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                mult[i][j]=0;
              for(int k=0; k<cols; k++){
                mult[i][j]=mult[i][j]+arr1[i][k]*arr2[k][j];
              }
            }
          }
              printf("the multiplication of matrix is :-\n");
          for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
              
                printf("%d ", mult[i][j]);
              
            }
            printf("\n");
          }          
      
        }
                break; 
        default : printf("enter the square matrix");
  }
  printf("do you wanna run code again?(y for yes and n for no)\n");
  scanf("%s", &ch);
  }
  while(ch=='y' || ch=='Y');
   }
