
/*Q-5 : Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print the square of X and increment
(if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. And when X is equal to Y, the program prints “Reached!”
Sample input(X,Y)                Sample output
10  5                       100, 81, 64, 49, 36, Reached!
5   10                      25, 36, 49, 64, 81, Reached!
10  10                      Reached!                               */



#include <stdio.h>

int main(){

 int x,y,i;
 int n,m;

    printf("Please Enter the two numbers :\n");
    scanf("%d%d", &x, &y);

    if(x>y){
        for(i=x; i>=y; i--){
            n=i*i;
            if(i==x){
                printf("%d ",n);
            }
            else if(i==y){
                printf(", Reached!");
            }
            else{
                printf(", %d ",n);
            }
        }
    }

    else if(x<y){
        for(i=x; i<=y; i++){
            n=i*i;
            if(i==x){
                printf("%d ",n);
            }
            else if(i==y){
                printf(", Reached!");
            }
            else{
                printf(", %d ",n);
            }
        }
    }

    else{
        printf("Reached!\n");
    }

 return 0;
}

