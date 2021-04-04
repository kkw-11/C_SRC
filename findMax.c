#include <stdio.h>

int main(void)
{
	//initialization list
	int nums[10] = {30, 20, 90, 100, 70, 10, 40, 50, 60, 80}; 

	for (int i = 0; i < 10; ++i)
		printf("%d ", nums[i]);
	printf("\n");
	
	int max = nums[0];
	for (int i = 1; i < 10; ++i){
		if (max < nums[i])
			max = nums[i];
		//else
		//	max = max;
	}
	
	
	printf("max: %d\n", max);
	return 0;
}
