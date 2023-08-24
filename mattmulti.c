#include<stdio.h>
void main(){
    int n,m;
    printf("enter number of rows:\n");
    scanf("%d",&n);
    printf("enter number of columns:\n");
    scanf("%d",&m);
    int arr1[n][m],arr2[n][m],multi[n][m];
    printf("enter elements of arr1[][]:\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        printf("Element of arr1[%d][%d]",i,j);
        scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        printf("%d ",arr1[i][j]);
       
        }
        printf("\n");
    }
    printf("enter elements of arr2[][]:\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        printf("Element of arr2[%d][%d]",i,j);
        scanf("%d",&arr2[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        printf("%d ",arr2[i][j]);
       
        }
        printf("\n");
    }
     for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
        multi[i][j]=0;
        for(int k=1;k<=m;k++){
            multi[i][j]=multi[i][j]+arr1[i][k]*arr2[k][j];
        }
       
        }
        
    }
    printf("the multi is:\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%d ",multi[i][j]);
        }
        printf("\n");
    }


}