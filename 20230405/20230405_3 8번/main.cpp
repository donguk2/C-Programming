#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double x, A, B;

	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf", &x);

	A = 4 * PI * x * x;
	B = 4 * PI * x * x * x / 3;
	printf("ǥ������ %lf�Դϴ�.\nü���� %lf�Դϴ�.\n", A, B);

	return 0;
}