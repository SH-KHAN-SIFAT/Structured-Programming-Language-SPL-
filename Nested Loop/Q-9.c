/*Q-9 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(5)         10101               (3)     101
            01010                       010
            10101                       101
            01010
            10101                                                   */


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

        for(i=j;  i<=j+(n-1);  i++){

            if(i%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
       }

       printf("\n");
    }

    return 0;
}
