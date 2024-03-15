/*Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
  which the point lies. Also check for special casespoint lies on +- x axis,+-yaxis,origin */

#include<stdio.h>
int main()
{

	int x,y;

	printf("Enter the value of x and y \n");
	scanf("%d%d",&x,&y);

	if (x >0 && y>0)
		printf("The point (%d,%d) is in first quadrant\n",x,y);

	else if (x <0 && y>0)
		printf("The point (%d,%d) is in second quadrant\n",x,y);

	else if (x <0 && y<0)
		printf("The point (%d,%d) is in third quadrant\n",x,y);


	else if (x >0 && y<0)
		printf("The point (%d,%d) is in fourth quadrant\n",x,y);


	else if (x >0 && y==0)
		printf("The point (%d,%d) is on +x axis\n",x,y);

	else if (x <0 && y==0)
	printf("The point (%d,%d) is on -x axis\n",x,y);
	
	else if (x==0 && y>0)
		printf("The point (%d,%d) is on +y axis\n",x,y);
	
	else if (x==0 && y<0)
		printf("The point (%d,%d) is on -y axis\n",x,y);
	
	else
		printf("The point (%d,%d) is on origin\n",x,y);

	return 0;
}
