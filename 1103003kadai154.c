//1103003 kadai154.c

#include<stdio.h>
#include<string.h>

main()
{
	FILE* fp;


	//�ǉ��������݂̃R�[�h


	//�ǉ��������ݐ�p�t�@�C��
	fp = fopen("text.data", "a");

	char retu[256];

	printf("�ǉ�����X�P�W���[������͂��Ă������� ( X �ŏI��)\n");

	while (1)
	{
		gets(retu);

		if (strcmp(retu, "X") != 0)
		{
			fprintf(fp, "%s", retu);
		}
		else
		{
			break;
		}
		fprintf(fp, "\n");
	}

	//�ǉ��������ݐ�p�t�@�C�������
	fclose(fp);


	//�����Ƀ\�[�g����R�[�h


	//�ǂݍ��ݐ�p�t�@�C��
	fp = fopen("text.data", "r");

	//�\�[�g�O�̃X�P�W���[�����e�̊m�F
	printf("\n�\�[�g�O�̃X�P�W���[��\n");
	while ((fgets(retu, 256, fp)) != NULL)
	{
		printf("%s\n", retu);
	}

	char moji[256][256], * p_moji1, * p_moji2;
	char w[256], * p_w;

	int cnt;
	for (cnt = 0; fgets(moji[cnt], 256, fp) != NULL; cnt++)
	{
		printf("�ʂ���\n");
	}

	

	//�m�F
	//printf("cnt =%d\n");

	fclose(fp);
}