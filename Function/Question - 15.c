/*Q-15: Function that finds and returns the minimum value in an array.
sample Input -            157 -28 -37 26 10                Minimum Value: -37
sample output  -          12 45 1 10 5 3 22                Minimum Value:  1             */


#include<stdio.h>

int minimum_value(int array[] , int size);

int main(){

    int a[50],n;

    printf("Please enter the size of the array :\n");
    scanf("%d",&n);

    printf("Please enter the inputs of the array :\n\n");
    for(int i=0;  i<n;  i++){
        scanf("%d",&a[i]);
    }

    printf("\nThe minimum value in the array is : %d\n",minimum_value(a ,n));

    return 0;

}

int minimum_value(int array[] , int size){

    int min=array[0];
    for(int i=0;  i<size;  i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
}
