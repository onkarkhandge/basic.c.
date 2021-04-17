#include<stdio.h>
void display(int h,int v)
{
	int c,r,a=10;
	for(r = 0;r < h;r++)
	{
		for(c =0;c < v;c++)
		{
			if(c <= r)
			{
				printf("%d  ",a);
				a--;
			}
		}
		printf("\n");
	}
}
int main()
{
	int h,v,c,r;
	printf("Enter the horizontal:");
	scanf("%d",&h);
	printf("Enter the vertical:");
	scanf("%d",&v);
	display(h,v);
	return 0;
}
