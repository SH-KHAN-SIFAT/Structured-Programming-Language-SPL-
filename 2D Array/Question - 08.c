/*Q-8 : WAP that will take inputs of m x n sized matrix into a 2D array and find the maximum element with index location
Sample input                                  Sample output
1 2 3                                        max value : 9
4 5 6                                        location : [2][2]
7 8 9                                                                                               */



#include <stdio.h>
#include<conio.h>
#include <math.h>

int main(){

    int a[100][100];
    int n,m,i,j;
    int column,row,max=0;

    printf("Please enter the row number : \n");
    scanf("%d",&n);
    printf("Please enter the column number : \n");
    scanf("%d",&m);

    printf("Please enter the inputs of the matrix : \n");
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

    ///finding out max value :
    for(i=0;  i<n;  i++ ){
        for(j=0;  j<m;  j++){
            if(max<a[i][j]){
                max=a[i][j];
                row=i;
                column=j;
            }
        }
    }

    printf("The max value is : %d\n",max);
    printf("The location is : [%d][%d]\n",row,column);

    return 0;
}