/*显示与输入数字相同的个位数字符*/
#include<stdio.h>
int main(void)
{
	int i, no;
	printf("请输入一个整数："); scanf_s("%d", &no);
	for (i = 1; i <= no; i++)
		printf("%d", i % 10);
	return 0;
}
