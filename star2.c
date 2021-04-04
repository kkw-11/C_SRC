#include <stdio.h>
int main(void)
{
	for (int i = 1; i <=5; ++i){
		for (int j = 1; j <= 6-i; ++j){  //for (int j = 1; j + i <= 6; ++j) or 
										 //for (int j = 6; j - i = 6 , j--)
			printf("*");
	}
	printf("\n");
	}
	return 0;
}
