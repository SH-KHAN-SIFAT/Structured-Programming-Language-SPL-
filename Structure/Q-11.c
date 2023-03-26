/*Q-11 :You have to declare a structure named triangle. triangle_id, base and height are the members of this structure. Now
you will have to take input of three triangles and find out which triangle has the maximum area using a function..
[Triangle Area = (base*height)/2]                               */


#include<stdio.h>

struct Triangle{

    int Triangle_id;
    int Base;
    int Height;
};

void max_area(struct Triangle x[100] , int size);

int main(){

    struct Triangle A[100];
    int n,i,Area=0;

    printf("Please enter the total number of triangle :");
    scanf("%d",&n);

    for(i=0;  i<n;  i++){
        printf("Please enter the Triangle_id,Base,Height of %d Triangle:\n",i+1);
        scanf("%d",&A[i].Triangle_id);
        scanf("%d",&A[i].Base);
        scanf("%d",&A[i].Height);
    }

     printf("\n");

     max_area(A , n);

    return 0;
}

void max_area(struct Triangle x[100] , int size){

    int Area1=x[0].Base*x[0].Height/2;
    int Area2=x[1].Base*x[1].Height/2;
    int Area3=x[2].Base*x[2].Height/2;

    if(Area1>Area2  &&  Area1>Area3){
        printf("Max Area is :%d\n\n",Area1);
    }
    else if(Area2>Area3  &&  Area2>Area1){
        printf("Max Area is :%d\n\n",Area2);
    }
    else if(Area3>Area1  &&  Area3>Area2){
        printf("Max Area is :%d\n\n",Area3);
    }
    else{
        printf("Equal or invalid\n\n");
    }
}
