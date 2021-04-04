#include <stdio.h>
int main(void)
{
	int men, women;
	scanf("%d %d", &men, &women);
	int sum = men + women;
	
	//double ratio1 = men / sum * 100;
	//double ratio2 = women / sum * 100;

	//double ratio1 = 1.0 * men / sum * 100;
	//double ratio2 = 1.0 * women / sum * 100;
	double ratio1 = (double)men / sum * 100;
	double ratio2 = (double)women / sum * 100;
	
	
	
	printf("manRatio: %.2f%%\t womanRatio: %.2f%%\n", ratio1, ratio2);
	
	return 0;

}
