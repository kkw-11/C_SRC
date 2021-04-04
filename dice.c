#include <stdio.h>
#include <stdlib.h> // rand()
#include <time.h>

int main(void)
{
	// rand() seed chaned
	srand(time(NULL));		
	
	for (int i = 1; i <=10; ++i) {
		int num = rand() % 5 + 1;   //random number
		printf("%d\n", num);
	}
	
	return 0;
}
