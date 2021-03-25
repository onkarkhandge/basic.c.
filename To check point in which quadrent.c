#include<stdio.h>
int main()
{
	int co1,co2;
	printf("Input the values for x and ycoordinate : ");
	scanf("%d %d",&co1,&co2);
	if(co1>0 && co2>0)
	{
		printf("The coordinate point (%d %d) lies in the first quadrent.\n",co1,co2);
	}
	else if(co1<0 && co2>0)
	{
		printf("The coordinate point (%d %d) lies in the second quadrent.\n",co1,co2);
	}
	else if(co1<0 && co2<0)
	{
		printf("The coordinate point (%d %d) lies in the third quadrent.\n",co1,co2);
	}
	else if(co1>0 && co2<0)
	{
		printf("The coordinate point (%d %d) lies in the fourth quadrent.\n",co1,co2);
	}
	else if(co1>0 && co2==0)
	{
		printf("The coordinate point (%d %d) lies on +ve x axis \n:",co1,co2);
	}
	else if(co1<0 && co2==0)
	{
		printf("The coordinate point (%d %d) lies on -ve x axis.\n",co1,co2);
	}
	else if(co1==0 && co2>0)
	{
		printf("The coordinate point (%d %d) lies on +ve y axis.\n",co1,co2);
	}
	else if(co1==0 && co2<0)
	{
		printf("The coordinate point (%d %d) lies on -ve y axis.\n",co1,co2);
	}
	else
	{
		printf("The coordinate point (%d %d) lies on the origin.\n",co1,co2);
	}
	return 0;
}
