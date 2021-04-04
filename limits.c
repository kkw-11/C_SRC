#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("CHAR_BIT: %d\n", CHAR_BIT); //char's range
	printf("CHAR_MIN: %d\tCHAR_MAX: %d\n", CHAR_MIN, CHAR_MAX);
	printf("SHRT_MIN: %d\tSHRT_MAX: %d\n", SHRT_MIN, SHRT_MAX);
	printf("INT_MIN: %d\tINT_MAX: %d\n", INT_MIN, INT_MAX);
	printf("LONG_MIN: %ld\tLONG_MAX: %ld\n", LONG_MIN, LONG_MAX);
	
	return 0;
}
