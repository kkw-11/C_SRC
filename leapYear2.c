#include <stdio.h>
int main(void)
{
	int year;
	printf("input year: ");
	scanf("%d", &year);
	
	int isLeap;
	isLeap = (year % 4 == 0 && year % 100 !=0 || year % 400 == 0);
//  isLeap = (year % 400 == 0 || year % 4 == 0 && year % 100 !=0);	
	if (year == isLeap)
		printf("%d is leap year\n", year);
	else
		printf("%d is ordinary year\n", year);
	
	printf("%d is a %s year\n", year,
	(year % 4 == 0 && year % 100 !=0 || year % 400 == 0) ? "leap" : "ordinary" )
		return 0;

}
	/*
	//year % 4 ==0;
	//year % 100 == 0;
	//year % 400 == 0;
	
	
	int isLeap;
	isLeap = (year % 4 == 0 && year % 100 !=0 || year % 400 == 0);
	//printf("%d\n", (year % 4 == 0 && year % 100 ==0 && year % 400 == 0));
	printf("%d is a leap year : %d\n", year, isLeap);
	*/

