#include <stdio.h>
int main(void)
{
	int year;
	printf("Enter any year : ");
	scanf("%d", &year);
	
	//year % 4 ==0;
	//year % 100 == 0;
	//year % 400 == 0;
	
	
	int isLeap;
	isLeap = (year % 4 == 0 && year % 100 !=0 || year % 400 == 0);
	//printf("%d\n", (year % 4 == 0 && year % 100 ==0 && year % 400 == 0));
	printf("%d is a leap year : %d\n", year, isLeap);
	
	return 0;
}
