#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d + %d : %d\n", a, b, a + b);
	printf("%d - %d : %d\n", a, b, a - b);
	printf("%d * %d : %d\n", a, b, a * b);
	printf("%d / %d : %d\n", a, b, a / b);
	printf("%d %% %d : %d\n", a, b, a % b); //% is remainder	
	
	return 0;
}
