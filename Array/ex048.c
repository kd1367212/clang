#include<stdio.h>
main()
{
	int ap[2][2][3] = { {{3,4,5},{4,5,6}},{{2,2,3},{2,5,6}} };
	int kei = 0, i, j,k;
	for (i = 0; i < 2; i++) { //�A�p�[�g��
		printf("�A�p�[�g%d ", i+1);

		for (j = 0; j < 2; j++) { //�K��
			printf("(%d�K) :", j + 1);

			for (k = 0; k < 3; k++) { //������
				printf("%d ", ap[i][j][k]);
				kei += ap[i][j][k];
			}
		}
		//�A�p�[�g�Q�։��s
		printf("\n");
	}
	
	printf("�S�̂� %d �l�Z��ł��܂�", kei);
}