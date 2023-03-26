/*Q-25: Program that implements function to perform operations on a 3X5 matrix:
sample input                  Original:                  Multiplied by 2:
7 16 55 13 12               7 16 55 13 12                14 32 110 26 24
12 10 52 0 7                12 10 52 0 7                 24 20 104 0 14
-2 1 2 4 9                  -2 1 2 4 9                   -4 2 4 8 18
(2)                                                                                             */



#include<stdio.h>

void show_matrix(int array[100][100] , int row , int column);
void scalar_multiply(int a[100][100] , int row , int column);

int main(){

    int matrix[100][100],n,m,i,j;

    printf("Please enter the total number of rows : \n");
    scanf("%d",&n);
    printf("Please enter the total number of columns : \n");
    scanf("%d",&m);

    printf("Please enter the inputs for the matrix : \n\n");
    for(i=0;  i<n;  i++){
        for(j=0;  j<m;  j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    show_matrix(matrix , n , m);
    scalar_multiply(matrix , n , m);

    return 0;

}

void show_matrix(int array[100][100] , int row , int column){

    printf("\nPrinting out the Matrix :\n\n");
    for(int i=0;  i<row;  i++){
        for(int j=0;  j<column;  j++){
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
}

void scalar_multiply(int a[100][100] , int row , int column){

    int x=-2;

    printf("\nPrinting out the Matrix after multiplication :\n\n");
    for(int i=0;  i<row;  i++){
        for(int j=0;  j<column;  j++){
            printf("%d  ",a[i][j]*x);
        }
        printf("\n");
    }
}
