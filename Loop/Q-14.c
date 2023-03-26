
/*Q-14 : Write a program (WAP) that will find nCr where n >= r; n and r are integers
5 2                             10
7 7                             120
9 3                             1                   */


#include<stdio.h>

int main(){

    int n,r,i,j,k;

    printf("Please enter the value of n : \n");
    scanf("%d",&n);
    printf("Please enter the value of r : \n");
    scanf("%d",&r);

    int factorial_n=1;
    int factorial_r=1;
    int factorial=1;

    for(i=n; i>=1; i--){
        factorial_n=factorial_n*i;
    }
    for(j=r; j>=1; j--){
        factorial_r=factorial_r*j;
    }
    for(k=n-r; k>=1; k--){
        factorial=factorial*k;
    }

    int a=factorial_r*factorial;
    int ans=factorial_n/a;

     printf("\n");
     printf("The value of %dC%d is : %d",n,r,ans);

    return 0;
}
