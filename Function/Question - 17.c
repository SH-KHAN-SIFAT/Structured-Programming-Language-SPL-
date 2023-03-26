
/*Q-17: Function to sort and return an input array in ascending order.
sample Input -            10 22 -5 117 0
sample output  -          -5 0 10 22 117                            */


#include<stdio.h>

int ascend_of_array(int array[] , int size);

int main(){

    int a[50],n;

    printf("Please enter the size of the array :\n");
    scanf("%d",&n);

    printf("Please enter the inputs of the array :\n\n");
    for(int i=0;  i<n;  i++){
        scanf("%d",&a[i]);
    }

    printf("\nThe array elements in ascending order are : ");
    ascend_of_array(a ,n);
    printf("\n");

    return 0;

}

int ascend_of_array(int array[] , int size){

    int temp;
    for(int i=0;  i<size;  i++){
        for(int j=i+1;  j<size;  j++){
            if(array[j]<array[i]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    for(int i=0;  i<size;  i++){
        printf("%d  ",array[i]);
    }

    return 0;
}
