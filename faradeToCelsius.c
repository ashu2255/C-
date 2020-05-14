//formula degree=(frade-32)*0.555
#include<stdio.h>
int main(){
	float f,c;
	printf("\n\nEnter temperature in 'FARADE'  :");
	scanf("%f",&f);
	
	c=(f-32)*0.555;
	printf("\nTemperature in degree is ---> %f",c);
	
	return 0;
}
	
	
	
