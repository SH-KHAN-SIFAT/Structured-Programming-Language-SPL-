/*Q-16: Function that multiplies the array elements by 2 and returns the array.
sample Input -            157 -28 -37 26 10                12 45 1 10 5 3 22
sample output  -          314 -56 -74 52 20                24 90 2 20 10 6 44             */


#include<stdio.h>

int multiple_of_array(int array[] , int size);

int main(){

    int a[50],n;

    printf("Please enter the size of the array :\n");
    scanf("%d",&n);

    printf("Please enter the inputs of the array :\n\n");
    for(int i=0;  i<n;  i++){
        scanf("%d",&a[i]);
    }

    printf("\nThe array elements multiply by 2 are : ");
    multiple_of_array(a ,n);
    printf("\n");

    return 0;

}

int multiple_of_array(int array[] , int size){

    for(int i=0;  i<size;  i++){
        printf("%d\t",array[i]*2);
    }
    return 0;
}
