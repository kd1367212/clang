//sort01.c �� ��{�I��@(��������)
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
	for (int i = 0; i < 4; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			//d[i]����ɁAd[j]�Ɣ�r����j++���Ă܂���r���Ă��J��Ԃ�

			//d[j]�̂ق�����������������בւ�������(����)
			if (d[i] > d[j])
			{
				//���בւ��J�n
				w = d[i];
				d[i] = d[j];
				d[j] = w;
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