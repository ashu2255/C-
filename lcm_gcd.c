#include<stdio.h>
int main(){
	int n1,n2,gcd,lcm,t1,t2;
	
	printf("Enter two number :: ");
	scanf("%d%d",&n1,&n2);
	t1=n1;
	t2=n2;
	while(n1!=n2){
	if(n1>n2)
	n1=n1-n2;	
	else
	n2=n2-n1;
	}
	gcd=n1;  //gcd can be n2 also
	lcm=(t1*t2)/gcd;
	printf("\nGCD -> %d\nLCM -> %d",gcd,lcm);
		
	return 0;
	}
