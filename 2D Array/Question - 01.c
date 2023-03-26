/*Q-1 : WAP that will take 9 integers into a 3 by 3 array (2D) and show them as traditional matrix view.Sample input Sample output
9 8 7 6 5 4 3 2 1              1 1 1 2 2 2 3 3 3
    9 8 7                                1 1 1
    6 5 4                                2 2 2
    3 2 1                                3 3 3                  */

    
    
#include <stdio.h>
#include <math.h>

int main(){

    int a[100][100];
    int n,m,i,j;

    printf("Please enter the row number : \n");
    scanf("%d",&n);
    printf("Please enter the column number : \n");
    scanf("%d",&m);

    printf("Please enter the numbers of matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Printing out the matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            printf("  %d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

