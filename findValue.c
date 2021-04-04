#include <stdio.h>

int main(void)
{
	//initialization list
	int nums[10] = {30, 20, 90, 100, 70, 10, 40, 50, 60, 80}; 

	for (int i = 0; i < 10; ++i)
		printf("%d ", nums[i]);
	printf("\n");
	
	
	
	int value;
	printf("input value: ");
	scanf("%d", &value);
	
	int i; 
	for (i = 0; i < 10; ++i){
		if (value == nums[i])
			break;	
	}
	
	if (i != 10)
		printf("%d is found at %d index\n", value, i);
	else
		printf("%d is not found.\n", value);
	
	return 0;
}
