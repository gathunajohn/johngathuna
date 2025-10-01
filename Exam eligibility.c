/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program to final exam
*/
#include <stdio.h>
int main(){
	float average_marks;
	float attendance;
	float attendance_percentage;
	
//prompt the user to enter
printf("Enter the average marks:");
scanf("%f",&average_marks);
//prompt the user to enter
printf("Enter the attendance:");
scanf("%f",&attendance);
attendance_percentage=attendance/100;


if(attendance_percentage>=0.75&&average_marks>=40){
	printf("eligible for final exam");
}else
{
	printf("not eligible for final exam");
}	
	return 0;
}