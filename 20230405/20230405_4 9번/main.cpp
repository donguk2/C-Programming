#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double AC, AE, BC, DE;

	printf("�������� ���̸� �Է��Ͻÿ�:");
	scanf("%lf", &BC);
	printf("�������� �׸����� ���̸� �Է��Ͻÿ�:");
	scanf("%lf", &AC);
    printf("�Ƕ�̵��� ���̸� �Է��Ͻÿ�:");
	scanf("%lf", &AE);

	DE = AE * BC / AC;
	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.\n", DE);

	return 0;









}

