/*Q-13 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(4)        1______1                          (3)        1____1
           12____21                                     12__21
           123__321                                     123321
           12344321                                                                          */


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

       for(i=1;  i<=j;  i++){
            printf("%d", i);
       }

       for(i=1;  i<=2*(n-j);  i++){        //for printing space
            printf("-");
       }

       for(i=j;  i>=1;  i--){
            printf("%d", i);
       }

       printf("\n");
    }

    return 0;
}

