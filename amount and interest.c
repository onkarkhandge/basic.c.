#include<stdio.h>
int main()
{
	int principle,roi,time;
	float interest,amount;
	printf("Input the values :",principle,roi,time);
	scanf("%d %d %d",&principle,&roi,&time);
	interest=principle*roi*time/100;
	printf("Interest=%f",interest);
	amount=principle+interest;
	printf("Amount=%f",amount);
	return 0;
}
