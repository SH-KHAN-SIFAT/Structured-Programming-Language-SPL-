/*Q-6 : Write a program in C to convert lowercase string to uppercase.
"My name is Andy"                              MY NAME IS ANDY
"& I am 20 years old"                          & I AM 20 YEARS OLD                       */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string : \n\n");
    gets(a);

    strupr(a);

    printf("\n\nThe string in upercase is : %s",a);

    return 0;
}

----------------------------------------------------------------------------------------------------------------------------------------------------

/*Q-6 : Write a program in C to convert uppercase string to lowercase.
"My name is Andy"                              MY NAME IS ANDY
"& I am 20 years old"                          & I AM 20 YEARS OLD                       */

#include<stdio.h>
#include<string.h>


int main(){

    char a[50];

    printf("Please enter the string : \n\n");
    gets(a);

    strlwr(a);

    printf("\n\nThe string in upercase is : %s",a);

    return 0;
}

