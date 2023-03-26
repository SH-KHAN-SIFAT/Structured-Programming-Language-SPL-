/*Q-17 : WAP that will take n integers into an array A. Now sort them in ascending & descending order within that array. Finally
show all elements of array A. Sample input Sample output
(3)        3 2 1             Ascending order:      1 2 3           Descending order:       3 2 1
(8)    7 8 1 3 2 6 4 3       Ascending order: 1 2 3 3 4 6 7 8      Descending order: 8 7 6 4 3 3 2 1 */



#include<stdio.h>

int main(){

    int a[8];
    int n,i,j;
    int x,y;

    printf("Please enter the total number/size of integers for the array : ");
    scanf("%d", &n);
    printf("\n");

    printf("Please enter the integers for the array : \n\n");
    for (i=0;  i<n;  i++){
            scanf("%d", &a[i]);
    }

    printf("\nPrinting the array according to the Ascending order : \n\n");
    for (i=0;  i<n;  i++){
        for (j=i+1;  j<n;  j++){
             if(a[i]>a[j]){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
             }
        }
    }

    for (i=0;  i<n;  i++){
        printf("%d\t", a[i]);
    }

    printf("\n\nPrinting the array according to the Descending order : \n\n");
    for (i=0;  i<n;  i++){
        for (j=i+1;  j<n;  j++){
             if(a[i]<a[j]){
                x=a[i];
                a[i]=a[j];
                a[j]=x;
             }
        }
    }

    for (i=0;  i<n;  i++){
        printf("%d\t", a[i]);
    }

    return 0;
}
