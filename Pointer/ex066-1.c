//ex066-1.c ��
#include<stdio.h>
main()
{
	char* p_game[] = { "wii","ds","playstation4" };
	for (int i = 0; i < 3; i++)
	{
		//�_�u���|�C���^��錾
		char** p;

		//�_�u���|�C���^�̏�����
		p = &p_game[i];

		//�\��
		while (*p_game[i])
		{
			//����(2024 C Programming 73�y�[�W�����Ȃ���ǂނ��Ɛ���)
			//
			//**p��p_game�̔z����w�肵�Ă���
			//
			//**p���P�����₷�Ǝw�肵�Ă���z�񂪈ړ����Ă��܂�
			// 
			//���������Ԃɕ\������ɂ�p_game�̔z��̒��g�̃A�h���X���P�����₹��
			//
			//�w�肵�Ă��镶�����ړ�����
			printf("%c", **p);
			*p_game[i]++;
		}
		printf("\n");
	}
}