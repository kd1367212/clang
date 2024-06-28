#include<stdio.h>

#define stacksize 8 //�X�^�b�N�T�C�Y
int stack[stacksize]; //�X�^�b�N�̈�p�̔z��
int sp = 0; //�X�^�b�N�|�C���^(�z��̓Y���p)

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, data, result;

	do
	{
		printf("\n\n�v�b�V���� i �A�|�b�v�� o �����>>>");
		key = getche(); //���[�U�����͂����玟�̃v���O�������n�܂�
		printf("\n");

		//�v�b�V���Ǘ�
		if (key == 'i')
		{
			printf("�f�[�^����>>>"); scanf("%d", &data);
			result = push(data);
			if (result == -1)
			{
				printf("\n�����X�^�b�N����t�ł�����\n");
			}
			else
			{
				display();
			}
		}

		//�|�b�v����
		if (key == 'o')
		{
			result = pop(&data);
			if (result == -1)
			{
				printf("\n�����X�^�b�N����ł�����\n");
			}
			else
			{
				printf("�X�^�b�N����f�[�^(%d)�����o���܂���\n", data);
			}
		}
	}while (key != 'e');
}

void display(void)
{
	int i;
	printf("\n===���݂̓��e===\n");
	for (i = 0; i < stacksize; i++)
	{
		printf("stack[ %2d ] �� %5d", i, stack[i]);
		if (i == sp)
		{
			printf("�� sp ���\�����Ă��鏊(���� sp �� %d)", sp); //�m�F�p
		}
		printf("\n");
	}
}

int push(int d)
{
	if (sp == stacksize) { return-1; }
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int* pd)
{
	if (sp == 0) { return-1; }
	sp--; //pop ����Ƃ��͐�� sp ���� -1 �����ăf�[�^�����o��

	*pd = stack[sp];
	
	stack[sp] = 0; //�m�F���₷�����邽��
					//�f�[�^�����o�����Ƃ���� 0 �ŏ�����(��ɂ���)

	return 0;
}