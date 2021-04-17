#include<stdio.h>
int display(int h,int v)
{
	int r,c;
		if(h != v)
	{
		printf("\n invalid input");
	    return;		
	}
	for(r = 0;r < h;r++)
	{
		for(c = 0;c < v;c++)
		if(c >= r)
		{
			printf(" * ");
		}
		else
		{
			printf("   ");
		}
		printf("\n");
	}
}
int main()
{
	int h,v,r,c;
	printf("Enter the horizontal:");
	scanf("%d",&h);
	printf("Enter the vertical:");
	scanf("%d",&v);
	display(h,v);
	return 0;
}
