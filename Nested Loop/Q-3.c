/*Q-3 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output
(3)       1   23   345
(4)   1  23    345    4567*/


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

       for(i=j;  i<j+j;  i++){      //can use 2*j in j+j
            printf("%d",i);
       }

       printf("\n");
    }

    return 0;
}
