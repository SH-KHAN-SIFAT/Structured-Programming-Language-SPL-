/*Q-10 :You have to declare a structure named triangle. triangle_id, base and height are the members of this structure. Now you
will have to take input of three triangles and find out the area of each triangle.[Triangle Area = (base*height)/2]        */


#include<stdio.h>

struct Triangle{

    int Triangle_id;
    int Base;
    int Height;
};

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

     for(i=0;  i<n;  i++){
        Area=A[i].Base*A[i].Height/2;
        printf("The Area of %d Triangle is :%d\n",i+1 , Area);
    }

    return 0;
}

