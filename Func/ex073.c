#include<stdio.h>
void error_msg(void);

main()
{
	int a, b;
	printf("data1 data2 ?�F"); scanf("%d%d", &a, &b);
	if (b == 0)
	{
		error_msg();
	}
	else
	{
		printf("%d / %d = %d �E�E�E%d", a, b, a / b, a % b);
	}
}

void error_msg(void)
{
	printf("�O�Ŋ���Z�͂ł��܂���");
	return;
}