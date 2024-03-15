/*Write a program to accept a character c and display category of the input character.
ALPHABET: c is a letter (65 to 90 or 97 to 122)
UPPERCASE: c is an uppercase letter (65 to 90)
LOWERCASE : c is a lowercase letter (97 to 122)
DIGIT: c is a digit (48 to 57)
SPACE: c is a space(32), tab(9), carriage return(13), new line(10)
OTHER: Not listed above
 */

#include<stdio.h>
int main()
{

	char c;

	printf("Enter the character\n");
	scanf("%c",&c);

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122 ))
		printf("%c is a ALPHABET\n",c);
	{

		if ((c >= 65 && c <= 90))
			printf("%c is uppercase letter\n",c);

		else
			printf("%c is lowecase letter\n",c);
	}

	else if(c >= 48 && c <= 57) 
		printf("%c is a digit\n",c);

	else if(c == 32 || c== ' ')
		printf("Space\n");

	else if (c == '\n')
		printf("Enter\n");

	else if (c == '\t')
		printf("tab\n");

	else
		printf("not listed above\n");


	return 0;
}
