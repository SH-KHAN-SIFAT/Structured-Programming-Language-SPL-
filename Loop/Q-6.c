
/*Q-6 : Write a program (WAP) for the described scenario: Player-1 picks a number X and Player-2 has to guess that number within
N tries. For each wrong guess by Player-2, the program prints “Wrong, N-1 Choice(s) Left!” If Player-2 at any time successfully 
guesses the number, the program prints “Right, Player-2 wins!” and terminates right away. Otherwise after the completion of N 
wrong tries, the program prints “Player-1 wins!” and halts.(Hint: Use break/continue     
sample input                                    Sample output                   
5                                       Wrong, 2 Choice(s) Left!
3                                       Wrong, 1 Choice(s) Left!
12  8  5                                Right, Player-2 wins!                           */                          




#include<stdio.h>

int main()
{
    int num,x,n,i;                                            // n = total number of choices

    printf("Please Enter the number :\n");
	scanf("%d",&num);

	printf("Please Enter the total number of choices :\n");
	scanf("%d",&n);

	int chance_left=n;

	for(i=1;i<=n;i++){

        	printf("Please Enter your choice :\n");
		scanf("%d",&x);
		chance_left--;

		   if(x==num){
                        printf("Right,player-2 wins!\n");
           		break;
		   }

		   else{
			printf("Wrong,%d chance(s) left!\n",chance_left);

                    	if(chance_left==0){
                        printf("Player-1 Wins!");
                    	break;
                   	}

          	   continue;
		   }
	}

return 0;
}


				[Alternative Answer]


#include <stdio.h>

int main(){

 int a,x,y,z;

    printf("Please Enter the number :\n");
    scanf("%d", &a);

    printf("Please Enter the first choice :\n");
    scanf("%d", &x);

    if(a==x){
        printf("Player-2 wins!\n");
    }
    else{
        printf("Wrong, 2 Chance(s) Left!\n");

        printf("Please Enter the second choice :\n");
        scanf("%d", &y);

        if(a==y){
            printf("Player-2 wins!\n");
        }
        else{
            printf("Wrong, 1 Chance(s) Left!\n");

                printf("Please Enter the third choice :\n");
                scanf("%d", &z);

                if(a==z){
                    printf("Player-2 wins!\n");
                }
                else{
                    printf("Wrong, 0 Chance(s) Left!\n");
                    printf("Player-1 wins!\n");
                }
        }
    }


return 0;
}
