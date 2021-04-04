#include <stdio.h>
int main(void)
{
	char letter;
	printf("Enter any alphabet : ");
	scanf("%c", &letter);
	

	
	printf("letter : %c Capital letter? : %d\n", letter, (letter >= 'A' && 		letter <= 'Z'));
	
	return 0;
}
