#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &x);

	y = x / 10;

	switch (y)
	{
	case 9:
		printf("%d�� A�Դϴ�", x);
		break;
	case 8:
		printf("%d�� B�Դϴ�", x);
		break;
	case 7:
		printf("%d�� C�Դϴ�", x);
		break;
	case 6:
		printf("%d�� D�Դϴ�", x);
		break;
	default:
		printf("%d�� F�Դϴ�", x);
		break;
	}
	return 0;
}