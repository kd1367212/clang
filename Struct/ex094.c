//ex094.c ��
#include<stdio.h>

//strcmp �֐����g�����߂ɂ�т���
#include<string.h>

#define nin 2

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
}

main()
{
	struct profile people[nin];
	struct profile* p;

	p = people;

	//�L�[�{�[�h�������
	for (int i = 0; i < nin; i++,p++)
	{
		printf("%d �l�� (���O) : ", i+1); scanf("%s",p->name);
		printf("%d �l�� (���N����)", i+1); scanf("%d %d %d", &p->birth[0],
			&p->birth[1], &p->birth[2]);
		printf("%d �l�� (���t�^) : ", i+1); scanf("%s",p->blood);
	}

	p = people;
	
	for (int i = 0; i < nin; i++, p++)
	{
		if (strcmp(p->blood,"A") == 0)
		{
			printf("%s\t", p->name);
			printf("%d �N %02d �� %02d �����܂� ���t�^ %s �^\n", p->birth[0],
				p->birth[1], p->birth[2], p->blood);
		}
	}
}