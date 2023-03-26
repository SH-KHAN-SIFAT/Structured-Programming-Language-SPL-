/*Q-11:  Function to take a string as input and find its length.
sample Input -               hello world                     I love my country
sample output  -                  11                                17                          */



#include<stdio.h>
#include<string.h>

int length_of_string(char s[]);

int main(){

    char sentence[50];

    printf("Please enter the string :\n");
    gets(sentence);

    printf("\nThe length of the string is : %d\n",length_of_string(sentence));

    return 0;

}

int length_of_string(char s[]){

    int length=strlen(s);

    return length;

}
