/*������ʾ���������*/
#include <stdio.h>
int main(void)
{
	int no, n;
	do {
		printf("������һ����������"); scanf_s("%d", &no);
		if (no <= 0)
			printf("��������������\a\n");
	} while (no <= 0);
	n = no;
	printf("%d��������ʾ�Ľ����", n);
	while (no > 0)
	{
		printf("%d", no % 10);
		no /= 10;
	}
}
