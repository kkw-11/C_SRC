#include <stdio.h>
int main(void)
{
	int *p;
	int a;
	int nums[5];
	p = &a;
	p = &nums[3];
	
	*p = 100;
	
	

	return 0;
}
