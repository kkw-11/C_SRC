#include <stdio.h>

int main(void)
{
	void *p;
	int a;
	double d;
	
	a = 100;
	p = &a;
	*(int *)p = 200; //*p = 200; (X)	
	printf("a: %d\n", a);
	
	d = 3.14;
	p = &d;
	*(double *)p = 2.718; //*p = 2.718; (X)
	printf("d: %f\n", d);
	
	return 0;
}
