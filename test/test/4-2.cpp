/*����������������������֮����������֮�ͣ��Զ�ʶ��������С��*/
#include <stdio.h>
int main(void)
{
	int a, b, x;
	int sum = 0;
	int y;

	printf("��������������\n");
	printf("����a:"); scanf_s("%d", &a);
	printf("����b:"); scanf_s("%d", &b);
	x = (a > b) ? a : b;
	y = (a > b) ? b - 1 : a - 1;
	do {
		sum += x;
		x--;
	} while (x != y);

	printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d\n", (a > b) ? b : a, (a > b) ? a : b, sum);
}
