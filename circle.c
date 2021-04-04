#include <stdio.h>
#define PI 3.141592 //macro constant

int main(void)
{
	int r;
	scanf("%d", &r);
	
	double area = PI * r * r;
	
	printf("area: %f\n", area);
	return 0;
}
