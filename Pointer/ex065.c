//ex065.c ��
#include<stdio.h>

//strcmp�֐����g�����߂ɌĂяo��
#include<string.h>

main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char* p_work;
	//���בւ�(�\�[�g sort)�v���O����
	for (int i = 0; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			//�P�ڂ̕�����̕����傫���ꍇ("A>B"�̂Ƃ��P��Ԃ�)
			if (strcmp(p_tbl[i], p_tbl[j]) == 1)
			{
				printf("%d ", strcmp(p_tbl[i], p_tbl[j]));
				//�\�[�g�J�n
				p_work = p_tbl[i];
				p_tbl[i] = p_tbl[j];
				p_tbl[j] = p_work;

			}
		}
		printf("\n");
	}

	//�\��
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", p_tbl[i]);
	}
}