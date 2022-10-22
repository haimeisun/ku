/*求1到n的和*/
#include<stdio.h>
int main(void)
{
	int n;
	printf("n的值："); scanf_s("%d", &n);

	int sum, i;
	sum = 0;
	for (i = 0; i <= n; i++)
		sum += i;

	printf("1到%d的值是%d\n", n, sum);
	return 0;
}
