/*��1��n�ĺ�*/
#include<stdio.h>
int main(void)
{
	int n;
	printf("n��ֵ��"); scanf_s("%d", &n);

	int sum, i;
	sum = 0;
	for (i = 0; i <= n; i++)
		sum += i;

	printf("1��%d��ֵ��%d\n", n, sum);
	return 0;
}
