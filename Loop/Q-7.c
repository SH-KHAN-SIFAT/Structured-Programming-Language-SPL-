/*Q-7 : Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’at the keyboard.
sample input                               Sample output
x                                           Input 1: X
1                                           Input 2: 1
a                                           Input 3: a
A                                                                       */



#include<stdio.h>

int main(){
    char ch;
    int i;

    printf("The searching letter is : 'A'\n");

    while(scanf(" %c",&ch)==1){
        i++;
        if(ch=='A')
            break;
            printf("Input %d: %c\n",i,ch);
    }

return 0;
}
