#include<stdio.h>
#include<limits.h>
int main()
{

printf("\n..............................................................\n");

printf("Data Type          Size         FS          Range    \n");

printf("\n..............................................................\n");

printf("char                 %d         %%c         %dto%d    \n",sizeof(char),SCHAR_MIN ,SCHAR_MAX);
printf("unsigned char        %d         %%c         %dto%d    \n",sizeof(unsigned char),0 ,UCHAR_MAX);
printf("short int            %d         %%hd        %dto%d    \n",sizeof(short int),SHRT_MIN,SHRT_MAX);
printf("unsigned short int   %d         %%hu        %dto%d    \n",sizeof(unsigned short int),0 ,UCHAR_MAX);
printf("int                  %d         %%d         %dto%d    \n",sizeof(int),INT_MIN, INT_MAX);
printf("unsigned int         %d         %%u         %dto%d    \n",sizeof(unsigned int),0,UINT_MAX);
printf("long int             %d         %%d        %dto%d     \n",sizeof(long int),LONG_MIN,LONG_MAX);
printf("unsigned int         %d         %%lu        %dto%d    \n",sizeof(unsigned long int),0,ULONG_MAX);

return 0;
}
