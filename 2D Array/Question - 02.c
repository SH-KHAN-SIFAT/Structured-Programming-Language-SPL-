/*Q-2 : WAP that will take (m x n) integers into a m by n array (2D) and print them both row-wise and column-wise.
 2 3                                                         3 3
1 2 3               Row-wise: 1 2 3 6 5 4                   1 1 1
6 5 4               Column-wise: 1 6 2 5 3 4                2 2 2           Row-wise: 1 1 1 2 2 2 3 3 3
                                                            3 3 3           Column-wise: 1 2 3 1 2 3 1 2 3          */



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

    printf("Printing out the matrix row wise : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            printf("  %d",a[i][j]);
        }
    }

    printf("\nPrinting out the column row wise : \n");
    for(i=0;  i<m;  i++){
        for(j=0;  j<n;  j++){
            printf("  %d",a[j][i]);
        }
    }

    return 0;
}