#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>

int main(void)
{

	int lotto[7];
	
	srand(time(NULL));
	
	for (int i = 0; i < 7;){
		lotto[i] = rand() % 45 + 1;
		//
		
		int j;
		for (j = 0; j < i; ++j){
			if (lotto[i] == lotto[j])
				break;
		}
		if (j == i)
			++i;
	}

	for (int i = 0; i < 7; ++i)
		printf("%d ", lotto[i]);
	printf("\n");

	return 0;
}






/* mine
{


	// rand() seed chaned
	srand(time(NULL));		
	
	for (int i = 1; i <=45; ++i) {
		int num = rand() % 45 + 1;   //random number
		for (int j = 1; j <=6; ++j)
			
		
	}
	
	return 0;
}
*/
