/*Q-11 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(5)          *                          (3)       *
            ***                                  ***
           *****                                *****
          *******
         *********                                                                     */


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

        for(i=j;  i<n;  i++){        //for printing space
            printf(" ");
       }

       for(i=1;  i<2*j;  i++){
            printf("*");
       }

       for(i=j;  i<n;  i++){        //for printing space
            printf(" ");
       }

       printf("\n");
    }

    return 0;
}

