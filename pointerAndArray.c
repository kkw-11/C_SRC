#include <stdio.h>

int main(void)
{
	int nums[] = {1,2,3,4,5};
	int *p;
	
	
	p = nums;		 // p = nums; <=> p = &nums[0]; 

	printf("%d\n", *p);
	++p;
	printf("%d\n", *p);

	return 0;
}
