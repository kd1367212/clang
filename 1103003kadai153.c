//1103003 kadai153.c

#include<stdio.h>
#include<string.h>

#define num 256
main()
{
	FILE* p_f;

	//�ǂݍ��ݐ�p�t�@�C���Ƃ��ēǂݍ���
	p_f = fopen("text.data", "r");

	char moji[256][256];

	char tuki[256], * p = tuki;
	char tuki_suke[256];
	printf("�\�����錎����͂��Ă�������>>>"); scanf("%s", &tuki);

	printf("%s ���̃X�P�W���[��\n",tuki);

	//�z��Ɋe�s���Ƃ̕�������i�[
	for (int i = 0; i < num && fgets(moji[i], num, p_f) != NULL; i++)
	{
		//�������Q���̂Ƃ�
		sscanf(moji[i], "%2s", tuki_suke);

		if (strcmp(tuki, tuki_suke) == 0)
		{
			printf("%s\n", moji[i]);
		}

		//�������P���̂Ƃ�
		sscanf(moji[i], "%1s", tuki_suke);

		if (strcmp(tuki, tuki_suke) == 0)
		{
			printf("%s\n", moji[i]);
		}
	}

	fclose(p_f);
}