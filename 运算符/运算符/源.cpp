#include<stdio.h>
int main(void)
{
	int i;
	int sum = 0, sum2 = 0;
	int cnt = 0;
	float avg;
	for (i = 1; i <= 100; ++i)
	{
		if (i % 2 == 1)
		{
			sum += i;
			++cnt;
		}
		else
		{
			sum2 += i;
		}
		avg = 1.0*sum / cnt;
	}
	printf("cnt = %d\n", cnt);
	printf("sum = %d\n", sum);
	printf("avg = %f\n", avg);
	printf("sum2 = %d\n", sum2);
	return 0;
}