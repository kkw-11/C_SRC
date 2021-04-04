#include <stdio.h>
int main(void)
{
	int base, height;
	scanf("%d %d", &base, &height);
	
	double square =1.0/2.0 * (base + height) ;
	printf("square : %.2f\n", square);
	
	return 0;

}
