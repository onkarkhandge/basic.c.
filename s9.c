#include<stdio.h>
int display(int h,int v)
{
	int r,c,a = 1;
		if(h != v)
	{
		printf("\n invalid input");
	    return;		
	}
	for(r = 0;r < h;r++)
	{
		for(c = 0;c < v;c++)
		if(c >= v-r-1)
		{
			printf(" %d ",a);
		}
		else
		{
			printf("   ");
		}
		a++;
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
