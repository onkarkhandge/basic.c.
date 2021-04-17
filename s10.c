#include<stdio.h>
int display(int h,int v)
{
	int r,c;
		if(h != v)
	{
		printf("\n invalid input");
	    return;		
	}
	for(c = 0;c < h;c++)
	{
		for(r = 1;r <= v;r++)
		if(r-1<=c)
		{
			printf(" %d ",r);
		}
		else
		{
			printf(" ");
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
