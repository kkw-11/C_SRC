#include <stdio.h>
int main(void)
{
	int score;
	printf("Enter your score : ");
	scanf("%d", &score);	
	//int a = 60;
	//printf("%d\n", score >= a);
	
	int isPassed;
	isPassed = (score >= 60);
	
	printf("score %d is passed? %d\n", score, isPassed);
	
	return 0;
}


