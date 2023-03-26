
/*Q-13 : Write a program (WAP) that will print the factorial (N!) of a given number N. Please see the sample input output.

(3)                       3!=3*2*1=6
(4)                       4!=4*3*2*1=24
(7)                       7!=7*6*5*4*3*2*1=5040       */


#include<stdio.h>

int main(){

    int n,i;

    printf("Please enter the value of n : \n");
    scanf("%d",&n);

    int factorial=1;

    printf("Printing the %d! series : ",n);

    for(i=n; i>=1; i--){
        if(i==n){
            printf("%d",i);
        }
        else{
            printf("*%d",i);
        }
    factorial=factorial*i;
    }

     printf("\n");
     printf("The value of %d! is : %d",n,factorial);

    return 0;
}

