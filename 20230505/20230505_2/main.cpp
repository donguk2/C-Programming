#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &x);

	switch (x % 2)
	{
	case 0: printf("¦���Դϴ�\n");
		break;
	case 1: printf("Ȧ���Դϴ�\n");
	}
	return 0;
}