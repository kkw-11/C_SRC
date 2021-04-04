#include <stdio.h>

int main(void)
{
	int fahr;
	int celsius;
	
	fahr = 100;
	//celsius = 5 / 9 * (fahr - 32); -> 5/9 is 0 
 
	//celsius = 5 * (fahr -32) / 9; 
	//celsius = 5.0 / 9.0 * (fahr -32); //-> floating point is slow
	celsius = (int)(5.0 / 9.0 * (fahr -32));	
	printf("fahr: %d ---> celsius: %d\n", fahr, celsius);  //decimal
	return 0;
}

