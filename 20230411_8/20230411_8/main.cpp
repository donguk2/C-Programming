#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int m;  //��

	printf("���� �������ּ���:\n");
	scanf("%d", &m);

	if (m >= 500)
	{
		printf("������� ���Խ��ϴ�.\n");
    }
	if (m > 500)
	{
		printf("%���� ��ȯ�Ǽ̽��ϴ�.\n", m - 500);  //�� - 500(�������)
	}
	else
	{
		printf("% ���� ��ȯ�Ǽ̽��ϴ�.\n", m);
	}
}