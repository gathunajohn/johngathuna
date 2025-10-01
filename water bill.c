/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program to calculate water bill
*/

#include <stdio.h>
int main(){
	float unit,total_bill,bill;

printf("Enter number of units:");
scanf("%f",&unit);

if(unit<=30){
	total_bill=unit*20;
	printf("Total bill: %f",total_bill);
	
}else if(unit>30&&unit<60)
{
	total_bill=unit*25;
	printf("Total bill: %f",total_bill);
}else if(unit>60){
	total_bill=unit*30;
	printf("Total bill: %f",total_bill);
}else{
	printf(" invalid input");
}	
	return 0;
}
