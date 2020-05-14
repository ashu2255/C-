#include<stdio.h>
int main(){
	int year;
	printf("Enter year (for eg.2015) :");
	scanf("%d",&year);
	if(year%4==0)
	printf("\nLeap year");
	else
	printf("\nnot leap year");
	return 0;
	}
