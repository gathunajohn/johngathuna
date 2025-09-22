/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Descprition:program to compute a loan
*/

#include <stdio.h>
int main()
{
float income;
int age;

//prompt the user to enter
printf("Enter income:");
scanf("%f",&income);

//prompt the user to enter
printf("Enter age:");
scanf("%d",&age);

if (income>=21000&&age>=21)
	
printf("congratulation you qualiffy for a loan");
printf("\n unfortunately we are unable to offer you a loan at this time");	
	
	return 0;
}