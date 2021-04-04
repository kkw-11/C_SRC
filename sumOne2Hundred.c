#include <stdio.h>

int main(void)
{
	int sum = 0;
/*
	int i;
	i = 1;
	
	while (i <= 100) {		
		sum = sum + i;
		++i;
		
	}
*/	
	for (int i = 1; i <= 100; ++i) 	
		sum = sum + i;
			
	
	
	printf("sum [1, 100] : %d\n", sum);
	




	return 0;
}
