#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ia, ib;
	printf("�����o���܂���\n�i�P�F�O�[�@�Q�F�`���L�@3�F�p�[�j��"); scanf("%d", &ia);

	srand(time(0));
	ib = rand() % 2 + 1;
	
	switch (ia) {
	case 1:
		printf("�v���C���[�́A�O�[�ł��B\n");
		break;

	case 2:
		printf("�v���C���[�́A�`���L�ł��B\n");
		break;

	case 3:
		printf("�v���C���[�́A�p�[�ł��B\n");
		break;
	}

	switch (ib) {
	case 0:
		printf("�R���s���[�^�́A�O�[�ł��B\n");
		break;

	case 1:
		printf("�R���s���[�^�́A�`���L�ł��B\n");
		break;

	case 2:
		printf("�R���s���[�^�́A�p�[�ł��B\n");
		break;
	}


	if (ia - 1 == ib) {
		printf("�������ł��B");
	}
	else if (ia == 1 && ib == 1) {
		printf("�v���C���[�̏����ł��B");
	}
	else if(ia == 2 && ib == 2) {
		printf("�v���C���[�̏����ł��B");
	}
	else if (ia == 3 && ib == 0) {
		printf("�v���C���[�̏����ł��B");
	}
	else {
		printf("�R���s���[�^�̏����ł��B");
	}
}