
//Print the ASCII value of user entered character in decimal, hex, octal format and also print the character for user entered ASCII value.


#include<stdio.h>
int main()
{

int n ;
char ch;
printf("Enter any character :\n");
scanf("%c",&ch);

printf("The value od character %c in decimal  = %d\n",ch,ch);
printf("The value of character %c in octal = %o\n",ch,ch);
printf("The value of character %c in hexadecimal = %x\n",ch,ch);


printf("Enter any value :");
scanf("%d",&n);

printf("The ASCII character of the given value is = %c\n" , n);
return 0;
}

