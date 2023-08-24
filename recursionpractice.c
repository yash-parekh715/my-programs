//find sum of n numbers using recursion
//#include<stdio.h>
// int sum(int n);
// void main(){
//     printf("the sum is :- %d", sum(10));
// }
// int sum(int n){
//     if(n == 1){
//      return 1;
//     }
//     int m1=sum(n-1);
//     int m=m1+n;
//     return m;
// }


// // find the factorial of n numbers
// #include<stdio.h>
// int fact(int n);
// void main(){
//     int n;
//     printf("enter the value of n");
//     scanf("%d", &n);
//     printf("\nthe factorial is:- %d\n", fact(n));
// }
// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     int f1=fact(n-1);
//     int f=f1*n;
//     return f;
// }

// //fibonacci series
// #include<stdio.h>
// int fib(int n);
// void main(){
//     int n;
//     printf("enter the number of terms:- ");
//     scanf("%d", &n);
//     printf("the fibonacci series is \n %d", fib(n));
// }
// int fib(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else{
//     int a=fib(n-1);
//     int b=a+fib(n-2);
//     return b;
//     }
// }
