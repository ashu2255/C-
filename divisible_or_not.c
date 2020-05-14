#include<stdio.h>
int main(){
	int divisor,dividend;
	printf("Enter number divisor and  dividend (for eg. '40/10' here 40 is divisor and 10 is dividend) :");
	scanf("%d%d",&divisor,&dividend);
	if(divisor%dividend==0)
	printf("\n%d is divisible by %d ",divisor,dividend);
	else
	printf("\n%d is not divisible by %d",divisor,dividend);
	return 0;
	}
