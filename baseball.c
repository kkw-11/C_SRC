#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	int question[3];
	int answer[3];
	
	//quension <---3
	srand(time(NULL));
	
	question[0] = rand() % 9 + 1;
	
	do {
		question[1] = rand() % 9 + 1;
	} while (question[1] == question[0]);
		
	/*
	question[2] = rand() % 9 + 1;
	while (question[2] == question[0] || question[2] == question[1])
		question[2] = rand() % 9 + 1;
	*/
	do {
		question[2] = rand() % 9 + 1;
	} while (question[2] == question[0] || question[2] == question[1]);
			
	printf("question: %d %d %d\n", question[0], question[1], question[2]);
	int strike;
	int ball;
	int count = 1;
	
	for (int i = 0; i < 3 ; ++i){
		strike = ball = 0;
		printf("input num 3: ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);		
		
		for (int i = 0; i < 3; ++i){
			for (int j = 0; j < 3; ++j){
				if (question[i] == answer[j]) {
					if (i == j)
						++strike;
					else
						++ball;
				}
			}
		}	
		printf("#strike: %d  #ball: %d\n", strike, ball);		
		
		if (strike == 3)
			break;
		++count;		
	}
	printf("\n");
	printf("Your count: %d\n", count);
	
	return 0;
			
}

