#include <stdio.h>

long long power(int base, int exponent)
{
	long long result =1LL;
	
	for (int i =1; i <= exponent; ++i)
		result = result * base;  // result 
		
	return result;
}

int main(void)
{
	printf("2 power of 32 : %lld\n", power(2,32));

	return 0;
}
