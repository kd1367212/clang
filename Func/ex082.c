//ex082.c �� main
#include<stdio.h>

//�֐�strcmp���g�p���邽�߂ɌĂяo��
#include<string.h>

#define last 8
void up_sort(int d1[]);
void down_sort(int d2[]);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	char sortflag[3];
	printf("�\�[�g��������́F"); scanf("%s", sortflag);
	if (strcmp(sortflag, "����") == 0) { up_sort(data); }
	if (strcmp(sortflag, "�~��") == 0) { down_sort(data); }

	for (int i = 0; i < last; i++)
	{
		//�\��
		printf("%d ", data[i]);
	}
}

//ex082.c �� �֐��錾
void up_sort(int d1[])
{
	int w;
	for (int i = 0; i < last - 1; i++)
	{
		for (int j = i + 1; j < last; j++)
		{
			if (d1[i]>d1[j])
			{
				w = d1[i];
				d1[i] = d1[j];
				d1[j] = w;
			}
		}
	}
}

void down_sort(int d2[])
{
	int w;
	for (int i = 0; i < last - 1; i++)
	{
		for (int j = i + 1; j < last; j++)
		{
			if (d2[i] < d2[j])
			{
				w = d2[i];
				d2[i] = d2[j];
				d2[j] = w;
			}
		}
	}
}