/*Q-4 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(3)       1				(4)          1
	 22				            22
        333				           333
        				          4444*/
        


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

       for(i=j;  i<=j+(j-1);  i++){
            printf("%d",j);
       }

       printf("\n");
    }

    return 0;
}
