#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float x;

	printf("������ �Է��Ͻÿ� :");
	scanf("%f", &x);

	if (x >= 90)
	{
		printf("%f�� A\n", x);
	}
	else if (x >= 80)
	{
		printf("%f�� B\n", x);
	}
	else if (x >= 70)
	{
		printf("%f�� C\n", x);
	}
	else if (x >= 60)
	{
		printf("%f�� D\n", x);
	}
	else
	{
		printf("F");
	}
	return 0;
}