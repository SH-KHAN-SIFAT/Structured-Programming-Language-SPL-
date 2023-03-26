/*Q-17 : WAP that will print a pattern based on the input integer n. Please see the sample input output.Sample input Sample output

(9)         ____$____
            ___$$$___
            __$_$_$__
            _$__$__$_
            $$$$$$$$$
            _$__$__$_
            __$_$_$__
            ___$$$___
            ____$____                                           */


#include <stdio.h>

int main(){

    int n,i,j;

    printf("Please enter an integer :\n");
    scanf("%d",&n);
    printf("\n");

    int x=(n/2)*3;

    for(j=0;  j<n;  j++){

        for(i=0;  i<n;  i++){

            if(i==n/2 || j==n/2 || i+j==n/2 || j+i==x || i-j==n/2 || j-i==n/2){
                printf("$");
            }
            else {
                printf(" ");
            }
        }
       printf("\n");
    }

    return 0;
}

