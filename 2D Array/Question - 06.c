/*Q-6 : WAP that will take inputs of two m x n sized matrix into two 2D array, suppose A and B. Now do C = A + B. Finally
display all the elements from matrix / 2D array C.
Sample input                                  Sample output
2 3
1 2 3
2 3 4                                           2 3 4
2 3                                             4 5 6
1 1 1
2 2 2                                                                               */



#include <stdio.h>
#include<conio.h>
#include <math.h>

int main(){

    int a[100][100],b[100][100],c[100][100];
    int n,m,i,j;

    printf("Please enter the row number : \n");
    scanf("%d",&n);
    printf("Please enter the column number : \n");
    scanf("%d",&m);

    printf("Please enter the inputs of the first matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            printf("please enter the value of [%d][%d] : ",i ,j);               //this line is optional
            scanf("%d",&a[i][j]);
        }
    }

    printf("Please enter the inputs of the second matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            printf("please enter the value of [%d][%d] : ",i ,j);               //this line is optional
            scanf("%d",&b[i][j]);
        }
    }

    printf("Printing out the sum matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            c[i][j]=a[i][j]+b[i][j];                                            //sum up the two matrix
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}