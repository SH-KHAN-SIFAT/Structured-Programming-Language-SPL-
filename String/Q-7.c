
/*Q-7 : Write a program in C to toggle the case of each character in a string
"My name is Andy"                              mY NAME IS aNDY
"& I am 20 years old"                          & i AM 20 yEARS OLD                       */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string : \n\n");
    gets(a);

    int i;

    for(i=0;  a[i]!='\0';  i++){
        if(a[i]>=65 && a[i]<=90){
            a[i]+=32;
        }
        else if(a[i]>=97 && a[i]<=122){
            a[i]-=32;
        }
    }

    printf("\n\nThe string in togglecase of every character is : %s",a);

    return 0;
}
