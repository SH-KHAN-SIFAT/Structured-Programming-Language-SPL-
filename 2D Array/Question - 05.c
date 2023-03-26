/*Q-5 : WAP that will take the size of an identity matrix from the user and generate the identity matrix into a 2D array.
Sample input                                  Sample output
    5                                           1 0 0 0 0
                                                0 1 0 0 0
                                                0 0 1 0 0
                                                0 0 0 1 0
                                                0 0 0 0 1                                                   */


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

    printf("Printing out the identity matrix : \n");
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            if(i==j){
               printf("1\t");
            }
            else{
               printf("0\t");
            }
        }
        printf("\n");
    }

    return 0;
}
