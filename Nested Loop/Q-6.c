/*Q-6 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output
(3)       1                    (4)               1
         12                                     12
        123                                    123
                                              1234*/


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

       for(i=j;  i<=(n-1);  i++){        //for printing space
            printf(" ");
       }

       for(i=1;  i<(j+1);  i++){
            printf("%d",i);
       }

       printf("\n");
    }

    return 0;
}