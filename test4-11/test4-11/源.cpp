/*逆向显示输入的整数*/
#include <stdio.h>
int main(void)
{
	int no, n;
	do {
		printf("请输入一个正整数："); scanf_s("%d", &no);
		if (no <= 0)
			printf("请输入正整数！\a\n");
	} while (no <= 0);
	n = no;
	printf("%d的逆向显示的结果是", n);
	while (no > 0)
	{
		printf("%d", no % 10);
		no /= 10;
	}
}
