
/*Q-20 : Write a program that takes an integer number n as input and find out the sum of the following series up to n terms.
1 + 12 + 123 + 1234 + …….
(1)                               1
(3)                               136
(4)                               1370                 */


#include<stdio.h>

int main(){

    int n,i;
    int j=0;
    int sum=0;

    printf("Please enter the value of n : \n");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        j=(j*10)+i;
        sum=sum+j;
            if(j==1){
                printf("%d",j);
            }
            else{
                printf("+%d",j);
            }
    }

    printf("\n");
    printf("The sum of the series is : %d\n",sum);

    return 0;
}
