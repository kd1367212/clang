#include<stdio.h>
main()
{
	FILE* fp;

	int score = 0, max_score;

	char ch, name[20], max_name[20];

	if (fp = fopen("score.txt", "r"))
	{
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
	}
	else
	{
		printf("�t�@�C�����ǂݎ��܂���");
		return;
	}

	printf("�ō����_ ���O : %s �n�C�X�R�A : %d\n\n", max_name, max_score);

	printf("�v���C���[�������"); scanf("%s", name);

	while (1)
	{
		printf("���݂̃X�R�A : %d ('e'�ŏI��)\n",score);
		ch = getch();

		if (ch == 'e')break;
		score++;
	}

	if (max_score < score)
	{
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);

			printf("�n�C�X�R�A�X�V�I\n");
		}
		else
		{
			printf("�t�@�C�����ǂݎ��܂���");
			return;
		}
	}
}