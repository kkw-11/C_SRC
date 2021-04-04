#include <stdio.h>
int main(void)
{
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	
	int isOdd;
	isOdd = (num % 2 != 0);
	
	printf("Is num: %d a odd number ? %d\n",num, isOdd);
	return 0;
}
