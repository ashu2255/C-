#include<stdio.h>
int main(){
	int n,rem,rev=0,t;
	printf("Enter the number :: ");
	scanf("%d",&n);
	t=n;
	while(n!=0){
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
		}
		if(rev==t)
		printf("\n%d is 'Pallindrome!'",t);
		else
		printf("\n%d is 'Not Pallindrome!'",t);
		
	return 0;
	}
