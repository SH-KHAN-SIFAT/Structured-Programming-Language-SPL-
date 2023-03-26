/*Q-12 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(9)          *                          (3)       *
            ***                                  ***
           *****                                  *
          *******
         *********
          *******
           *****
            ***
             *                                                                          */



#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    int a=(n+1)/2;
    int b=n-a;

    for(j=1;  j<=a;  j++){

        for(i=j;  i<a;  i++){        //for printing space
            printf(" ");
       }

       for(i=1;  i<2*j;  i++){
            printf("*");
       }

       for(i=j;  i<a;  i++){        //for printing space
            printf(" ");
       }

       printf("\n");
    }

    for(j=1;  j<=b;  j++){

        for(i=j;  i<2*j;  i++){        //for printing space
            printf(" ");
       }

       for(i=1;  i<=(n-2*j);  i++){
            printf("*");
       }

       for(i=j;  i<2*j;  i++){        //for printing space
            printf(" ");
       }

       printf("\n");
    }

    return 0;
}