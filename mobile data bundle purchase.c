/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:program to mobile bundle purchase
*/

#include <stdio.h>
int main()
{
int choice;
printf("enter choice:");
scanf("%d",&choice);

printf("select data bundle:\n");
printf("1.100MB @ 50ES\n");
printf("2.500MB @ 200KES\n");	
printf("3.1GB @ 350KES\n"); 
printf("4.2GB @ 600KES\n");

//switch statement to display
switch(choice)
{
case 1:
	printf("select 100MB,cost=50KES\n");
	
	break;
case 2:
	printf("select 500MB,cost=200KES\n");
	break;
case 3:
	printf("select 1GB,cost=350KES\n");
	break;
case 4:
	printf("select2GB,cost=600KES\n");
	break;
default:
printf("invalid choice\n");	
	break;
}
	return 0;
}

