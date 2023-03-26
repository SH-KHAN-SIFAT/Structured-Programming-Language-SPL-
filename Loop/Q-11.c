/*Q-11 : Write a program (WAP) that will calculate the result for the first Nth terms of the following series.
[In that series sum, dot sign (.) means multiplication]
1^2.2 + 2^2.3 + 3^2.4 + 4^2.5 + …….
(3)                       Result: 50
(4)                       Result: 130
(7)                       Result: 924          */


#include<stdio.h>

int main(){

    int n,i,j;

    printf("Please enter the value of n : \n");
    scanf("%d",&n);

    int sum=0;

    printf("Printing the series : \n");
    for(i=1; i<=n; i++){
        if(i==1){
            printf("%d^2.%d",i,i+1);
        }
        else{
            printf("+%d^2.%d",i,i+1);
        }
    }

    printf("\n");

    for(j=1; j<=n; j++){
        i=(j*j)*(j+1);
        sum=sum+i;
    }
    
    printf("The sum of the series is : %d\n", sum);

    return 0;
}

