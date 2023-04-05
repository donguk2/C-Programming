#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	double x, A, B;

	printf("구의 반지름을 입력하시오:");
	scanf("%lf", &x);

	A = 4 * PI * x * x;
	B = 4 * PI * x * x * x / 3;
	printf("표면적은 %lf입니다.\n체적은 %lf입니다.\n", A, B);

	return 0;
}