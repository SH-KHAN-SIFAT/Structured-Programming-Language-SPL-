/*Q-15 : Write a program (WAP) that will find xy(x to the power y) where x, y are positive integers.

5 2                             25
6 1                             6
0 5                             0                   */


#include<stdio.h>

int main(){

    int x,y,i;

    printf("Please enter the value of x : \n");
    scanf("%d",&x);
    printf("Please enter the value of y : \n");
    scanf("%d",&y);

    int ans=1;

    for(i=1; i<=y; i++){
        ans=ans*x;
    }

    printf("The value of %d^%d is : %d",x,y,ans);

    return 0;
}
