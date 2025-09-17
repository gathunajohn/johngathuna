#include <stdio.h>
int main(){
/*
Name:John
Reg:CT100/G/22448/24
Description:program to prompt the user
*/

float height;
int phone_no;
float weight;
//prompt the user to enter
printf("Enter the height:");
scanf("%f",&height);
//prompt the user to enter
printf("Enter the phone number:");
scanf("%d",&phone_no);
//prompt the user to enter
printf("Enter the weight:");
scanf("%f",&weight);
printf("\nheight: %f",height);
printf("\nphone number:%d",phone_no);
printf("\nweight:%f",weight);
	
	return 0;
}