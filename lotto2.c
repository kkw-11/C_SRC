#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{


	int box[45];
	
	for (int i = 0; i < 45; ++i)
		box[i] = i + 1;
		
	//shuffle
	for (int i = 1; i <= 10000000; ++i){
		int left = rand() % 45;
		int right = rand() % 45;
		
		int tmp = box[left];		
		box[left] = box[right];
		box[right] = tmp;
		
	}	
	
	for (int i = 0; i < 7; ++i)
		printf("%2d ", box[i]);
	printf("\n");
		
	return 0;
}
