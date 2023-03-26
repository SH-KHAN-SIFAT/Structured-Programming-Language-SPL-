/*Q-24: Program that continuously takes two positive integers as inputs and uses two functions to find their GCD (greatest
common divisor) and LCM (least common multiple). Both functions take parameters and returns desired values.
sample input                  sample output:
5 7                         GCD: 1       LCM: 35
12 12                       GCD: 12      LCM: 12
12 32                       GCD: 4       LCM: 96                                        */



#include<stdio.h>

int GCD(int num1, int num2);
int LCM(int num1, int num2);

int main(){

    int x,y;

    printf("Please enter the value of x & y : \n");
    scanf("%d%d",&x , &y);

    printf("\nThe GCD (greatest common divisor) of %d & %d is : %d\n\n",x , y , GCD(x , y));
    printf("\nThe LCM (least common multiple) of %d & %d is : %d\n\n",x , y , LCM(x , y));

    return 0;

}

int GCD(int num1, int num2){

    int rem;

    while(num2!=0){
        rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    return num1;
}

int LCM(int num1, int num2){

    int m=num1*num2;
    int n=GCD(num1 , num2);
    int ans = m/n;

    return ans;
}