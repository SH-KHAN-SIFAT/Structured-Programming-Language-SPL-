/*Q-7 : WAP that will take inputs of two 3 x 3 sized matrix into two 2D array, suppose A and B. Now do C = A * B (multiplication)
Sample input                                  Sample output
1 2 3
4 5 6
7 8 9                                               9  9  9
                                                    24 24 24
2 2 2                                               39 39 39
2 2 2
1 1 1                                                                                               */



#include <stdio.h>
#include<conio.h>
#include <math.h>

int main(){

    int a[100][100],b[100][100],c[100][100];
    int n,m,i,j,k,sum=0;

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

    printf("Printing out the multiplication of two matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            for(k=0;  k<n;  k++){
                sum=sum+a[i][k]*b[k][j];                                        //formula of matrix multiplication
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
