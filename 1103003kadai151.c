//1103003 kadai151.c
#include<stdio.h>
#include<string.h>

main()
{
	FILE* p_f;

	//�������ݐ�p�t�@�C���Ƃ��ēǂݍ���
	p_f = fopen("text.data", "w");

	char retu[256];
	
	printf("�X�P�W���[������͂��Ă������� ( X �ŏI��)\n");

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

	//�������ݐ�p�t�@�C�������
	fclose(p_f);
	
	printf("�X�P�W���[���t�@�C���̓��e\n");
	
	//�ǂݍ��ݐ�p�t�@�C���Ƃ��ēǂݍ���
	p_f = fopen("text.data", "r");
	
	//fgets �ŕ������� retu_out �Ɋi�[����Ă������]���������� NULL�l �Ƃ��Ĉ�����
	//
	//NULL�l �������Ƃ������Ƃ͖����܂œ��������Ƃ��Ӗ�����̂Ń��[�v�𔲂���
	while ((fgets(retu, 256, p_f)) != NULL)
	{
		printf("%s", retu);
	}

	//�ǂݍ��ݐ�p�t�@�C�������
	fclose(p_f);
}