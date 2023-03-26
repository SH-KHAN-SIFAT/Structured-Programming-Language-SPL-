/*Q-2: Function to print an input character value.
sample Intputs - A          65
sample output  - Z          90       */



#include<stdio.h>

int character_value(char A){

    return A;

}

int main(){

    char x;

    printf("Please enter any Character : \n");
    scanf("%c",&x);

    int value = character_value(x);
    printf("Value of the character is : %d\n",value);
            //------------or---------------//
    printf("Value of the character is : %d\n",character_value(x));

    return 0;

}
