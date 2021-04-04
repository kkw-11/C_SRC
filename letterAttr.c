#include <stdio.h>
int main(void)
{
	unsigned char bold, italic, shadow, under;

	bold = italic = shadow = under = 0;
	bold = 1;
	italic = shadow = 1;
	bold=0;

	
	printf("bold: %d italic: %d shadow: %d under: %d\n", bold, italic, shadow, under);
	return 0;
}
