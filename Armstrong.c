#include<stdio.h>
int main(){
	int number,temp,rem,sum=0;
	printf("Enter the number :: ");
	scanf("%d",&number);
	temp=number;
	while(number!=0){
		rem=number%10;
		sum+=rem*rem*rem;
		number/=10;
		}
	if(sum==temp)
	printf("\n%d is an armastrong number",temp);
	else
	printf("\n%d is not an armastrong number",temp);
	return 0;
	}
