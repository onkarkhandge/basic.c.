#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float s,area;
	printf("Enter values of sides of triangle :",a,b,c);
	scanf("%d %d %d",&a,&b,&c);
	s=(a+b+c);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area of triangle=%f",area);
	return 0;
}
