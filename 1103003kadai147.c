// 1103003 kadai147.c

#include<stdio.h>
#include<string.h>

struct animal
{
	int no;
	char name[20];
	char color[20];
};

main()
{
	struct animal data[50] = { {30,"dog","white"},
							{50,"tiger","yellow"},
							{60,"horse","brown"} }, * p_data = data;

	char firstflag, dumy[2];

	do
	{
		
		printf("�������j���[ (X �̓��͂ŏI�����܂�)\n");
		printf("�P�F�f�[�^�\�� �Q�F�f�[�^�ǉ� �R�F�f�[�^���� �����́H"); scanf("%c", &firstflag);

		if (firstflag == '1')
		{
			printf("���ׂẴf�[�^��\�����܂��B\n");

			for (int i = 0; data[i].no > 0; i++)
			{
				printf("�ԍ� : %d\t���O : %s\t�F : %s\n\n", data[i].no, data[i].name, data[i].color);
			}
		}
		else if (firstflag == '2')
		{
			int i;
			for (i = 0; data[i].no > 0; i++);

			printf("�f�[�^�̒ǉ����s���܂��̂œ��͂��Ă��������B\n");

			printf("�ԍ�>"); scanf("%d", &data[i].no);
			printf("���O>"); scanf("%s", data[i].name);
			printf("�F >"); scanf("%s", data[i].color);
		}
		else if (firstflag == '3')
		{
			printf("�o�^����Ă���f�[�^�̌������s���܂��B\n");

			int secondeflag;
			printf("�������� ( 1.�ԍ� : 2.���O : 3.�F) >"); scanf("%d", &secondeflag);

			if (secondeflag == 1)
			{
				int number;
				printf("��������ԍ�>"); scanf("%d", &number);

				printf("\n��������\n");

				for (int i = 0; data[i].no > 0; i++)
				{
					if (data[i].no == number)
					{
						printf("�ԍ� : %d\t���O : %s\t�F : %s\n", data[i].no, data[i].name, data[i].color);
					}
				}
			}
			else if (secondeflag == 2)
			{
				char namae[256];
				printf("�������閼�O>"); scanf("%s", namae);

				printf("\n��������\n");

				for (int i = 0; data[i].no > 0; i++)
				{
					if (strcmp(data[i].name, namae) == 0)
					{
						printf("�ԍ� : %d\t���O : %s\t�F : %s\n", data[i].no, data[i].name, data[i].color);
					}
				}
			}
			else if (secondeflag == 3)
			{
				char iro[256];
				printf("��������F>"); scanf("%s", iro);

				printf("\n��������\n");

				for (int i = 0; data[i].no > 0; i++)
				{
					if (strcmp(data[i].color, iro) == 0)
					{
						printf("�ԍ� : %d\t���O : %s\t�F : %s\n", data[i].no, data[i].name, data[i].color);
					}
				}
			}
		}
		gets(dumy);
	} while (firstflag != 'X');
}