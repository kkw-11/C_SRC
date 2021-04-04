#include <stdio.h>

#define LENGTH 10

int main(void)
{

	int nums[] = {50, 30, 10, 100, 90, 60, 40, 70, 80, 20};
	
	//bubble sorting
	for (int i  = LENGTH-1; i >= 1; --i){
		for (int j = 0; j < i; ++j){
			if (nums[j] > nums[j+1]){
				int tmp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = tmp;
			}
		}
	}
	
	
	
	
	for (int i = 0; i< 10; ++i){
		printf("%d%c", nums[i], (i < 9) ? ' ' : '\n');
	    //printf("\n");
	/*	if (i < 9)
			printf(" ");
		else
			printf("\n");
	*/
	}
	return 0;
}
