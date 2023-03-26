/*Q-18 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(5)        H---H                         (3)        H-H
           H---H                                    HHH
           HHHHH                                    H-H
           H---H
           H---H                                                                            */

#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    int x=(n+1)/2;

    for(j=1;  j<=n;  j++){

        if(j!=x){
            for(i=1;  i<=1;  i++){
                printf("H");
           }
           for(i=1;  i<=(n-2);  i++){
                printf("-");
           }
            for(i=n;  i<=n;  i++){
                printf("H");
           }
        }

        else{
           for(i=1;  i<=n;  i++){
            printf("H");
           }
       }

       printf("\n");
    }

    return 0;
}
