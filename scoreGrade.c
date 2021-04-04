#include <stdio.h>
int main(void)
{
	int score;
	printf("input score: ");
	scanf("%d", &score);
	
	char grade;
	if  (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else 
		grade = 'F';
		
	printf("score: %d\t scoreGrade: %d\n", score, grade);
	return 0;
}


/*
{
	int score;
	printf("input score: ");
	scanf("%d", &score);
	
	if  (score >= 90)
		printf("score: %d\t scoreGrade: A\n", score);
	else if (score >= 80)
		printf("score: %d\t scoreGrade: B\n", score);
	else if (score >= 70)
		printf("score: %d\t scoreGrade: C\n", score);
	else if (score >= 60)
		printf("score: %d\t scoreGrade: D\n", score);
	else 
		printf("score: %d\t scoreGrade: Fail\n", score);
		

	return 0;
}
*/
