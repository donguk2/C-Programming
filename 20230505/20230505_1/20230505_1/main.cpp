#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &x);

	if (x % 2 == 0)
	{
		printf("%d�� ¦���Դϴ�", x);
	}
	else if (x % 2 != 0)
	{
		printf("%d�� Ȧ���Դϴ�", x);
	}
	else
	{
		printf("0�Դϴ�");
	}
	return 0;

}