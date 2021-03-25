#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Input three integers",a,b,c);
	scanf("%d %d\n %d\n",&a,&b,&c);
	a<b?(a<c?printf("a is minimum"):printf("c is minimum")):(b<c?printf("b is minimum"):printf("c is minimum"));
	return 0;
}
