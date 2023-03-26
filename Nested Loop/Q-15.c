
/*Q-15 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(5)        ZZZZZ                         (3)        ZZZ
              Z                                      Z
             Z                                      ZZZ
            Z
           ZZZZZ                                                                            */



#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    for(j=1;  j<=n;  j++){

        if(j==1 || j==n){
            for(i=1;  i<=n;  i++){
                printf("Z");
           }
        }
        else {
           for(i=1;  i<=(n-j);  i++){
                printf(" ");
           }
            for(i=(n-j)+1;  i<=(n-j)+1;  i++){
                printf("Z");
           }
           for(i=1;  i<=j-1;  i++){
                printf(" ");
           }
        }

       printf("\n");
    }

    return 0;
}

