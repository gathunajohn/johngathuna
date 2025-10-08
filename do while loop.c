/*
Name:John Gathuna
Reg No:CT100/G/22448/24
Description:
*/

#include <stdio.h>
#include <string.h>

int main()
{
char password[20];

do{
	printf("Enter password:");	
	scanf("%s,& password");
}while(strcmp(password,"1234")!=0);

printf("Access Granted\n");

	

	return 0;
}