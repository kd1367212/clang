//1103003 kadai137.c
#include<stdio.h>

int change(char moji);

main()
{
	int flag;
	char a;
	printf("�A���t�@�x�b�g�P����"); scanf("%c", &a);
	flag = change(a);

	if (flag == 0)
	{
		printf("�߂�l�́A %d �Ȃ̂œ��͂��������́A�������ł�", flag);
	}
	else
	{
		printf("�߂�l�́A %d �Ȃ̂œ��͂��������́A�������ł�", flag);
	}
}

int change(char moji)
{
	if ('A' <= moji && moji <= 'Z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}