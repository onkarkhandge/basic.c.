#include<stdio.h>
int main()
{
	float Iv,a,t,v;
	printf("Input the initial velocity acceleration and time :");
	scanf("%f %f %f",&Iv,&a,&t);
	v=Iv+a*t;
	printf("Value of Velocity=%f",v);
	return 0;
}
