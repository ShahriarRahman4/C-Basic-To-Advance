#include<stdio.h>
#include<ctype.h>
int main()
{
   char upper,lower;
   printf("Enter any lower case letter :");
   scanf("%c",&lower);
   upper=toupper(lower);//lower=tolower(upper);

   printf("Upper Case Letter : %c ",upper);


    return 0;
}