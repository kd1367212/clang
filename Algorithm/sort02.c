//sort02.c �� �o�u���\�[�g
#include<stdio.h>
main()
{
	int d[] = { 30,7,25,16,10 };
	int w;

	//�\�[�g�O��\��
	printf("�\�[�g�O�̔z��\nd[ ] = ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");

	//���בւ��v���O����
	for (int i = 4; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			//+1�����邱�Ƃŗׂ̃f�[�^���w�肷�邱�Ƃ��ł���

			//d[j+1]�̕�����������������בւ�������(����)
			if(d[j]>d[j+1])
				{

				//���בւ��J�n
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
				}
		}
	}

	//�\�[�g���\��
	printf("�\�[�g��̔z��\nd[ ] = ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}