#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("input 3 nums: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int max, mid, min;
	
	if (a > b){
		max = a;
		min = b;
	} else {
		max = b;
		min = a;
	}
	
	if (c > max){
		mid = max;
		max = c;
	}else if (c > min){
		mid = c;
	}else{
		mid = min;
		min = c;
	}
	printf("max: %d\tmid: %d\t min: %d\n", max, mid, min);
	return 0;
}




/*

#include <stdio.h>
int main(void)

{
   int num1, num2, num3;
   printf("input num1 : ");
   scanf("%d", &num1);
   printf("input num2 : ");
   scanf("%d", &num2);
   printf("input num3 : ");
   scanf("%d", &num3);

	if (num1 > num2 && num1 > num3 && num2 > num3)
		max = num1;
		mid = num2;
		min = num3;
		printf("%d is max\n%d is mid\nmin3 is min",max, mid, min);
	else if (num1 > num2 && num1 > num3 && num3 > num2)
		max = num1;
		mid = num3;
		min = num2;
		printf("%d is max\n%d is mid\nmin3 is min",max, mid, min);
	else if (num2 > num1 && num2 > num3 && num3 > num1)
		max = num2;
		mid = num3;
		min = num1;
		printf("%d is max\n%d is mid\nmin3 is min",max, mid, min);
	else if (num2 > num1 && num2 > num3 && num1 > num3)
		max = num2;
		mid = num1;
		min = num3;
		printf("%d is max\n%d is mid\nmin3 is min",max, mid, min);
	else if (num3 > num1 && num3 > num2 && num1 > num2)
		max = num3;
		mid = num1;
		min = num2;
		printf("%d is max\n%d is mid\nmin3 is min",max, mid, min);
	else 
		max = num3;
		mid = num2;
		min = num1;	
		printf("%d is max\n%d is mid\nmin3 is min",max, mid, min);
	return 0;
}
*/

