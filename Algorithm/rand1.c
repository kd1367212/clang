#include<stdio.h>
//�ȉ��@�������g���Ƃ��ɕK�v
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu;

	srand(time(0));//������������(�V���b�t��)����@��srand�̂Ƃ��݈̂�񂾂��s��
	kazu = rand();//0�`32767�͈̔͂ŗ��������߂�
	printf("��������������%d�ł�\n", kazu);
}