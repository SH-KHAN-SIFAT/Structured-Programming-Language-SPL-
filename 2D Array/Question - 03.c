/*Q-3 : WAP that will take inputs of a 3 by 3 matrix into a 2D array. Now find the determinant of this matrix.
Sample input                   Sample output
1 2 3
4 5 6                               0
7 8 9                                                       */



#include <stdio.h>
#include<conio.h>
#include <math.h>

int main(){

    int a[100][100];
    int n,m,i,j,Determinant;

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

    printf("Printing out the determinant of (3*3) matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            Determinant=  a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2]))
                         -a[0][1]*((a[1][0]*a[2][2])-(a[1][2]*a[2][0]))
                         +a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
        }
    }

    printf("%d\n",Determinant);

    return 0;
}
