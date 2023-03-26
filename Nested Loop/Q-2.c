
/*Q-2 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output
(3)       123   234   345
(4)  1234  2345    3456    4567*/


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

       for(i=j;  i<=j+(n-1);  i++){
            printf("%d",i);
       }

       printf("\n");
    }

    return 0;
}
