#include <stdio.h>

int main(void)
{
	int score;
	printf("input score!: ");
	scanf("%d", &score);
	
	switch (score/10) {
	case 10:
		//printf("A\n");
		//break;
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default: //5,4,3,2,1,0
		printf("F\n");
	}
	
	
	
	return 0;
}


