#include<stdio.h>
int main()
{
	float r,circumference,area,pi=3.14;
	printf("\n redius of circle : ");
	scanf("%f",&r);
	circumference=2*pi*r;
	printf("\n circumference of circle=%f",circumference);
	area=pi*r*r;
	printf("\n area of circle=%f",area);
	return 0;
}
