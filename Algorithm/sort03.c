//sort03.c �� ��{�}���@
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
	for (int i = 1; i < 5; i++)
	{
		for (int j = i-1; j>=0; j--)
		{
			//d[j]���d[j+1]�̂ق���������������f�[�^�����炵�Ă���(����)

			//d[j]<d[j+1]�ɂȂ�Ƃ��炳�Ȃ��ėǂ��̂� for j �̃��[�v�𔲂���
			if (d[j + 1] >= d[j])break;

			//���בւ��J�n
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}

	//�\�[�g���\��
	printf("�\�[�g��̔z��\nd[ ] = ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", d[i]);
	}
}