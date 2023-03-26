/*Q-8 : . WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index
position.Sample input Sample output
(5)      1 2 3 4 5          Max: 5, Index: 4         Min: 1, Index: 0
(6)     2 8 3 9 0 1         Max: 9, Index: 3         Min: 0, Index: 4*/


#include<stdio.h>

int main(){

    int a[6];
    int n,i;
    int min=a[0], max=a[0];
    int min_index=0, max_index=0;

    printf("Please enter the number of inputs for the array : ");
    scanf("%d",&n);
    printf("\n");

    for (i=0;  i<n;  i++){
        scanf("%d", &a[i]);
    }

    for (i=0;  i<n;  i++){

       if (a[i]>max){
        max=a[i];
        max_index=i;
       }
       else if (a[i]<min){
        min=a[i];
        min_index=i;
       }
    }

    printf("\nmax : %d , index [%d]\n", max , max_index);
    printf("min : %d , index [%d]\n", min , min_index);

    return 0;
}
