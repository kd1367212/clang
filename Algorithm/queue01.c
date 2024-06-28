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
		printf("\n\nエンキューは i 、デキューは o を入力>>>");
		key = getche();
		printf("\n");

		//エンキュー処理
		if (key == 'i')
		{
			printf("データを入力>>>");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1)
			{
				printf("\n※※キューが一杯です※※\n");
			}
			else
			{
				display();
			}
		}

		//デキュー処理
		if (key == 'o')
		{
			result = dequeue(&data);
			if (result == -1)
			{
				printf("\n※※キューが空です※※\n");
			}
			else
			{
				printf("キューからデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	} while (key != 'e');
}

void display(void)
{
	int i;

	printf("\n===現在のキューの内容===\n");
	for (i = 0; i < queuesize; i++)
	{
		printf("queue[%2d] は %5d", i, queue[i]);
		if (i == head)
		{
			printf("← head が示している所(現在 head は %d)", head); //確認用
		}

		if (i == tail)
		{
			printf("← tail が示している所(現在 tail は %d)", tail); //確認用
		}
		printf("\n");
	}
}

int enqueue(int d)
{
	if ((tail + 1) % queuesize == head) { return -1; }

	queue[tail] = d;

	tail++;

	tail = tail % queuesize; //リング状の配列として考えるために 7 から 0 へ
								//添字を移動する

	return 0; //確認用
}

int dequeue(int* pd)
{
	if (head==tail) { return -1; }

	*pd = queue[head];

	queue[head] = 0;

	head++;

	head = head % queuesize;

	return 0; //確認用
}