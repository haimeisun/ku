/*��ʾ������������ͬ�ĸ�λ���ַ�*/
#include<stdio.h>
int main(void)
{
	int i, no;
	printf("������һ��������"); scanf_s("%d", &no);
	for (i = 1; i <= no; i++)
		printf("%d", i % 10);
	return 0;
}
