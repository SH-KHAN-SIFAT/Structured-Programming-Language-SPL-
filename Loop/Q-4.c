/*Q-4 :Write a program (WAP) that will take N numbers as inputs and compute their average. (Restriction: Without using any array)
(3)         10   20   30.5                 AVG of 3 inputs: 20.166667
(2)         22.4      11.1                 AVG of 2 inputs: 16.750000              */



#include <stdio.h>

int main(){

 int n,i;
 float a;
 float sum=0;

    printf("Please Enter the number of inputs :\n");
    scanf("%d", &n);
    printf("Please Enter the %d inputs :\n",n);

    for(i=1; i<=n; i++){
       scanf("%f",&a);
       sum+=a;
    }

    printf("Average of %d inputs : %f\n",n,sum/n);

 return 0;
}