//1103003 kadai155.c

#include<stdio.h>
#include<string.h>
#include<time.h>

struct data
{
	char que[21];
	char ans[21];
	char kai;
};

main()
{
	struct data mon;
	mon.kai = 0;

	FILE* fp;

	fp = fopen("mon.data", "w");

	for (int i = 0; i < 10; i++)
	{
		printf("%d �ڂ̕�������� : ", i + 1); scanf("%s", mon.que);
		
		fprintf(fp, "%s", mon.que);

		if (i == 9)break;

		fprintf(fp, "\n");
	}

	fclose(fp);


	fp = fopen("mon.data", "r");

	//�����_���ɖ�������������������

	srand(time(0));

	int toi;

	//�z��ɕ�������i�[
	char moji[10][21];

	for (int i = 0; i < 10 && fgets(moji[i], 21, fp) != NULL; i++);

	//�o��
	printf("\n***�o�肵�܂�***\n");
	for (int i = 0; i < 5; i++)
	{
		toi = rand() % 10 + 1;
		printf("%d ��� %s\t:", i + 1, moji[toi]); scanf("%s", mon.ans);
		printf("\n");

		if (strcmp(moji[toi], mon.ans) == 0)
		{
			mon.kai++;
		}
	}

	printf("\n���� %d ��\t���� %d %", mon.kai, mon.kai / 5 * 100);

	fclose(fp);
}