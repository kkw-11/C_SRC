#include <stdio.h>
int main(void)
{/*
	int i;
	i = 1;
	while (i <= 10){
	//	printf("%c ", (i % 2) ? '0' + i : 'X');
	//	printf("%c ", (i % 2 == 0) ? 'X' : '0' + i);
		if(i % 2 == 0)
			printf("%d ", i);
		else 
			printf("X ");
		
		++i;
	
	}
*/
	
	for (int i = 1;i <= 10; ++i){
		if(i % 2 == 0)
			printf("%d ", i);
		else 
			printf("X ");		
	}
	
	
	printf("\n");

	return 0;
}



