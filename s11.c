#include<stdio.h>
int display(int h,int v)
{
	int r,c;
	char ch = 'A';
		if(h != v)
	{
		printf("\n invalid input");
	    return;		
	}
	for(c = 0;c < h;c++)
	{
		for(r = 0;r < v;r++)
		if(c <= r)
		{
			printf(" %c ",ch + r);
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
