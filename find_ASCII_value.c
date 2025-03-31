#include<stdio.h>

int main()
{
 char c;
 printf("enter the character");
 scanf("%c",&c);

    // %d displays the integer value of a character
    // %c displays the actual character
 printf("ASCII value %c=%d",c,c);
 return 0;
}