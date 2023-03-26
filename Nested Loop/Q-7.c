
/*Q-7 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(2)      **                    (4)              ****
         **                                     ****
                                                ****
                                                ****    */


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

       for(i=1;  i<=n;  i++){
            printf("*");
       }

       printf("\n");
    }

    return 0;
}

