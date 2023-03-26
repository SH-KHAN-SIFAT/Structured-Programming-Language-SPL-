/*Q-14 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(5)        *****                         (3)        ***
           *---*                                    *-*
           *****                                    ***
           *---*
           *****                                                                            */

#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

        if(j%2==0){

            for(i=1;  i<=1;  i++){
                printf("*");
           }

           for(i=1;  i<=(n-2);  i++){
                printf("-");
           }

            for(i=n;  i<=n;  i++){
                printf("*");
           }
        }

        else{

           for(i=1;  i<=n;  i++){

            printf("*");
           }
       }

       printf("\n");
    }

    return 0;
}

