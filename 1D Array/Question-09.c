/*Q-9 : WAP that will take n alphabets into an array, and then count number of vowels in that array.Sample input Sample output
(7)                  AKIOUEH                     Count: 5
(29)      UNITED INTERNATIONAL UNIVERSITY       Count: 13*/


#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int vowel=0;
    int i;

    printf("Please enter the strings : ");
    gets(str);
    printf("\n");

    for (i=0;  i<100;  i++){

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        vowel++;
    }

    printf("\nNo of vowel : %d\n", vowel);

    return 0;
}
