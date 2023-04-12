#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int m;  //돈

	printf("돈을 투입해주세요:\n");
	scanf("%d", &m);

	if (m >= 500)
	{
		printf("음료수가 나왔습니다.\n");
    }
	if (m > 500)
	{
		printf("%원이 반환되셨습니다.\n", m - 500);  //돈 - 500(음료수값)
	}
	else
	{
		printf("% 원이 반환되셨습니다.\n", m);
	}
}