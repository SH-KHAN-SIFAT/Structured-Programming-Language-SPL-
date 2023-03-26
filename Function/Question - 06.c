
/*Q-6: Function to calculate the sum of n numbers coming from the console.
sample Intputs -        80 33 27                    100 -100
sample output  -           140                        0                     */



#include<stdio.h>

int Sum(int i , int j , int k);

int main(){

    int a,b,c;

    printf("Please enter the first number :\n");
    scanf("%d",&a);
    printf("Please enter the second number :\n");
    scanf("%d",&b);
    printf("Please enter the third number :\n");
    scanf("%d",&c);

    printf("The sum of all numbers is :%d\n",Sum(a,b,c));

    return 0;

}

int Sum(int i , int j , int k){

    return i+j+k;

}
