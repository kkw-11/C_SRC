#include <stdio.h>

int add(int a, int b)
{
	return a + b;	
}


int substract(int a, int b)
{
	return a- b;
}


int main(void)
{
	int (*fp)(int, int);
	
	fp = &add; // fp = add;
	printf("(*fp)(4,3): %d\n", (*fp)(4,3));
	
	fp = &substract; //fp = substract;
	printf("(*fp)(4,3) : %d\n", (*fp)(4,3));
	

	return 0;
}
