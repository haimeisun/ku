/*输入两个整数，计算他们之间所有整数之和（自动识别两数大小）*/
#include <stdio.h>
int main(void)
{
	int a, b, x;
	int sum = 0;
	int y;

	printf("请输入两个整数\n");
	printf("整数a:"); scanf_s("%d", &a);
	printf("整数b:"); scanf_s("%d", &b);
	x = (a > b) ? a : b;
	y = (a > b) ? b - 1 : a - 1;
	do {
		sum += x;
		x--;
	} while (x != y);

	printf("大于等于%d小于等于%d的所有整数的和是%d\n", (a > b) ? b : a, (a > b) ? a : b, sum);
}
