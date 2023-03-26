
/*Q-5 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output
(3)       3                    (4)               4
         32                                     43
        321                                    432
                                              4321*/


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

       for(i=n;  i>(n-j);  i--){
            printf("%d",i);
       }

       printf("\n");
    }

    return 0;
}
