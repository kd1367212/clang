//�V�F���\�[�g(���ǌ^�}���@)�ɂ�鏸���\�[�g
#include<stdio.h>

//�f�[�^�����`
#define dcnt 8

main()
{
	int d[dcnt] = { 70,60,80,50,40,20,30,10 };
	int w, gap;

	gap = dcnt / 2;//�S�f�[�^��/2�ōŏ��̔�r�Ԋu�����߂�

	//�\�[�g�O�m�F�p
	printf("�\�[�g�O\nd[ ] = ");
	for (int k = 0; k < dcnt; k++)
	{
		printf("%d ", d[k]);
	}
	printf("\n");

	while (gap > 0)
	{
		for (int i = gap; i < dcnt; i++)
		{
			for (int j = i - gap; j >= 0; j -= gap)
			{
				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else break;


			}
		}

		gap /= 2;
	}

	//�\�[�g��m�F�p
	printf("�\�[�g��\nd[ ] = ");
	for (int k = 0; k < dcnt; k++)
	{
		printf("%d ", d[k]);
	}
}
