/*Q-1 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output
(3)       123   123   123
(4)  1234  1234    1234    1234*/




#include <stdio.h>

int main(){

    int n,i,j;

   printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){
       for(i=1;  i<=n;  i++){
            printf("%d",i);
       }
       printf("\n");
    }

    return 0;
}