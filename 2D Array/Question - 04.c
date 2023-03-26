/*Q-4 : WAP that will take inputs of a n sized square matrix into a 2D array. Now show all the elements of its two diagonals
Sample input                                  Sample output
1 2 3 4 5                               Major Diagonal : 1 5 9 6 0
4 5 6 7 8                               Minor Diagonal : 5 7 9 8 4
7 8 9 1 0
9 8 7 6 5
4 3 2 1 0                                                                           */


#include <stdio.h>
#include<conio.h>
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
            printf("please enter the value of [%d][%d] : ",i ,j);               //this line is optional
            scanf("%d",&a[i][j]);
        }
    }

    printf("Printing out the matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Printing out the major diagonal : \n");
    for(i=0;  i<n;  i++ ){
        for(j=i;  j<=i;  j++){
           printf("%d\t",a[i][j]);
        }
    }

    printf("\nPrinting out the minor diagonal : \n");
    for(i=0;  i<n;  i++ ){
           printf("%d\t",a[i][n-i-1]);
    }

    return 0;
}