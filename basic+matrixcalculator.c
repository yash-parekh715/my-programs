#include<stdio.h>
#include<math.h>
void main(){
    char ch; 
    do{     
    char a; 
     printf("enter m for basic calculator and n for matrix calculator :- "); 
     scanf("%s", &a);
 switch(a){
     case 'm' : {
    int c,d;
    char e;
    printf("enter the first number :- ");
    scanf("%d", &c);
    printf("enter the mathematical operator:- ");
    scanf("%s", &e);
    printf("enter the second number :- ");
    scanf("%d", &d);
 switch(e){
    case '+' :- printf("the sum is %d", c+d);
        break;
    case '-' :- printf("the difference is %d", c-d);
        break;
    case '*' :- printf("the product is %d", c*d);
        break;
    case '/' :- printf("the division is %d", c/d);
        break;
    case '%' :- printf("the remainder is %d", c%d);
        break;
    case '^'  :- printf("c^d %d", pow(c,d));
        break;
    default :- printf("enter the valid input for a basic calculator");
        break;
} 
        break;
 }
     case 'n' :{
        int rows, cols, x;
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
        scanf("%d", &x);
      
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
      switch(x){
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
       }  
        break;
    default : printf("enter the valid statement");
        break; 
   } 
     printf("\ndo you wanna run the code again? (press y for yes or press any other key for no)");    
     scanf("%s", &ch);
 } while(ch=='y' || ch=='Y');
}