//Write a pr to creat four function calculator. Four functions are +, - , *, /

#include<stdio.h>
int main()
{
	float n1,n2,ans ;
	char op,ch;
    
Here:

	printf("Enter two digits:\n");
	scanf("%f%f",&n1,&n2);

	printf("Enter the operands:\n");
	scanf("%*c%c",&op);

	switch(op)
	{
		case '+' : ans = n1 + n2 ;
				   printf("ans : %.2f \n",ans);
				   break;
		case '-' : ans = n1 - n2 ;
				   printf("ans = %.2f \n",ans);
				   break;
		case '*' : ans = n1 * n2 ;
				   printf("ans : %.2f \n",ans);
				   break;

		case '/' :if( n2 != 0 )
				  {
					  ans = n1 /  n2 ;
					  printf("ans : %.2f \n",ans);
				  }
				  else
					  printf("cant Div by 0 \n");
				  break;
		default : printf("Invalid Operand \n");
				  break;
	}
	printf("Do you want to continue : y/n\n");
	scanf("%*c%c",&ch);

	if( ch == 'y' || ch == 'Y')
		goto Here;


	return 0;
}
