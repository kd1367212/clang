//ex068.c ��
#include<stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();//��������͂�������
				//�����ɑΉ����鐔�l(16�i��)�� c �Ɋi�[�����

	//getchar ctrl+Z��EOF���͂���
	//EOF(-1�Ƃ��Ĉ�����) End Of File

	while (c != EOF)//�f�[�^���͂̊��� ctrl+Z
	{
		putchar(c);//c �Ɋi�[����Ă��鐔�l�𕶎��ƑΉ������ĕ\��
		putchar('\n');
		gets(dumy);//���̓o�b�t�@���N���A

		//getchar�͓��͂������ƁA�G���^�[�����������̃G���^�[(���s)��
		//�����Ƃ��ē��͂����(�Q�����ڈȍ~�̓o�b�t�@�Ɏ����Ŋi�[�����)
		// 
		//getchar�œ��͂��������� printf �܂��� putchar �Ŏ��o����邪
		//���ׂĎ��o�����܂œ��͂ł��Ȃ�(=�o�b�t�@�̒��ɂ܂�����������)
		// 
		//gets�֐��Ńo�b�t�@�̒��g����ɂ���(dumy[256]��������)���Ƃ�
		//�ēx getchar�֐��œ��͂ł���悤�ɂȂ�

		c = getchar();
	}
	
}