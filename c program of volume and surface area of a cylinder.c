/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program to compute volume and surface area of a cylinder
*/

#include <stdio.h>

#define PI 3.142

int main()
{
float radius,height,volume,surface_area;

//prompt the user to enter
printf("Enter radius:");
scanf("%f",&radius);

//prompt the user to enter
printf("Enter height:");
scanf("%f",&height);

volume =PI*radius*radius*height;
surface_area= 2*PI*radius*radius +2*PI*radius*height;

printf("\nradius:%f",radius);
printf("\nheight:%f",height);
printf("\nvolume:%f",volume);
printf("\nsurface area:%f",surface_area);
	
	return 0;
}