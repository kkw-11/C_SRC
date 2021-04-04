#include <stdio.h>

int main(void)
{
	char grades[] = {'F','F','F','F','F','D','C','B','A','A'};
	
	
	int score;
	printf("input score!: ");
	scanf("%d", &score);

	printf("score: %d\tscoreGrade: %c\n", score, grades[score/10]);
	
	return 0;
}


