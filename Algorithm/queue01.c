#include<stdio.h>

#define queuesize 8
int queue[queuesize];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main()
{
	int key, data, result;

	do
	{
		printf("\n\n�G���L���[�� i �A�f�L���[�� o �����>>>");
		key = getche();
		printf("\n");

		//�G���L���[����
		if (key == 'i')
		{
			printf("�f�[�^�����>>>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n�����L���[����t�ł�����\n");
			}
			else
			{
				display();
			}
		}

		//�f�L���[����
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n�����L���[����ł�����\n");
			}
			else
			{
				printf("�L���[����f�[�^(%d)�����o���܂���\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;

	printf("\n===���݂̃L���[�̓��e===\n");
	for (i = 0; i < queuesize; i++)
	{
		printf("queue[%2d] �� %5d", i, queue[i]);
		if (i == head)
		{
			printf("�� head �������Ă��鏊(���� head �� %d)", head); //�m�F�p
		}

		if (i == tail)
		{
			printf("�� tail �������Ă��鏊(���� tail �� %d)", tail); //�m�F�p
		}
		printf("\n");
	}
}

int enqueue(int d)
{
	if ((tail + 1) % queuesize == head) { return -1; }

	queue[tail] = d;

	tail++;

	tail = tail % queuesize; //�����O��̔z��Ƃ��čl���邽�߂� 7 ���� 0 ��
								//�Y�����ړ�����

	return 0; //�m�F�p
}

int dequeue(int* pd)
{
	if (head==tail) { return -1; }

	*pd = queue[head];

	queue[head] = 0;

	head++;

	head = head % queuesize;

	return 0; //�m�F�p
}