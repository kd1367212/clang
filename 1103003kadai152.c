//1103003 kadai152.c

#include<stdio.h>
#include<string.h>

main()
{
	FILE* p_f;

	//�ǉ��������ݐ�p�t�@�C���Ƃ��ēǂݍ���
	p_f = fopen("text.data", "a");

	char retu[256];

	printf("�ǉ�����X�P�W���[������͂��Ă������� ( X �ŏI��)\n");

	while (1)
	{
		gets(retu);
		if (strcmp(retu, "X") != 0)
		{
			fprintf(p_f, "%s", retu);
		}
		else
		{
			break;
		}
		fprintf(p_f, "\n");
	}

	printf("�X�P�W���[���t�@�C���̓��e\n");

	//�ǉ��������ݐ�p�t�@�C�������
	fclose(p_f);

	//�ǂݍ��ݐ�p�t�@�C���Ƃ��ēǂݍ���
	p_f = fopen("text.data", "r");

	//�i�j���Q�d�ɂ��邱�Ƃŕ�����̈�ԍŌ�� NULL ���w�肷�邱�Ƃ��ł���
	//�P���Ɖ��s���Ӗ�����
	while ((fgets(retu, 256, p_f)) != NULL)
	{
		printf("%s", retu);
	}

	//�ǂݍ��ݐ�p�t�@�C�������
	fclose(p_f);
}