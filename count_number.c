#include<stdio.h>
int main(){
	int count=0,number;
	printf("Enter an positive integer number :: ");
	scanf("%d",&number);
	while(number>0){
		count++;
		number/=10;
		}
		printf("\nNumber of digit = %d",count);
	return 0;
	}
