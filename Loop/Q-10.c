/*Q-10 : Write a program (WAP) that will give the sum of first Nth terms for the following series.
1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….
(2)                       Result: -1
(3)                       Result: 2
(4)                       Result: -2          */


#include<stdio.h>

int main(){

    int n,i;

    printf("Please enter the value of n : \n");
    scanf("%d",&n);

    int sum=0;
    int total_positive=0;
    int total_negative=0;

    printf("Printing the series : \n");
    for(i=1; i<=n; i++){
        if(i%2==0){
            total_negative=total_negative+i;
            printf(",-%d",i);
        }
        else if(i%2!=0){
            if(i==1){
                printf("%d",i);
            }
            else{
                printf(",%d",i);
            }
            total_positive=total_positive+i;
        }
    }

    sum=total_positive-total_negative;

    printf("\n");
    printf("The sum of the series is : %d\n", sum);

    return 0;
}
