#include <stdio.h>
int main(void)
{
	int kor;
	int eng;
	int mat;
	scanf("%d %d %d", &kor, &eng, &mat);
	
	int sum = kor + eng + mat;
	//double average = sum / 3.0;
	double average = (double)sum / 3.0;
	
	printf("sum : %d , average : %.2f\n", sum, average);
	return 0;
}
