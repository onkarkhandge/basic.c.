#include<stdio.h>
int display(int h,int v)
{
	int r,c;
	for(r = 0;r < h;r++)
	{
		printf("\n");
		if(r = 1)
		{
		    for(c = 0;c < v;c++)
		    {
		     	printf(" 1 ");
		    }
		    printf("\n");
	    }
	    if(r = 1)
	    {
		    for(c = 0;c < v;c++)
		    {
			    printf(" 2 ");
		    }
		    printf("\n");
	    }
	    if(r = 2)
	    {
	    	for(c = 0;c < v;c++)
	    	{
	    		printf(" 3 ");
			}
			printf("\n");
		}
		if(r = 3)
		{
			for(c = 0;c < v;c++)
			{
				printf(" 4 ");
			}
			printf("\n");
		}
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
