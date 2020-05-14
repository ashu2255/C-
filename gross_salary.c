/*GROSS SALARY FORMULA = (basic salary + 25% HRA + 10% DA)
 Basic salary is the figure agreed upon between a company, its employee (without factoring in bonus, overtime, or any kind of extra compensation). 
 Gross salary includes overtime pay and bonuses (does not consider taxes and other deductions).
 
 */
#include<stdio.h>
int main(){
float basic;
printf("Enter basic salary::");
scanf("%f",&basic);
printf("\nGross salary::%f",basic+(0.25*basic)+(0.1*basic));
}

