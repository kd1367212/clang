//ex064.c �� �c�ɕ\��
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char* p;
	//�\��

	//*p_ride�̔z��̐����R������R�񃋁[�v������
	for (int i = 0; i < 3; i++)
	{
		//p��p_ride[i]�̃A�h���X���i�[����
		p = p_ride[i];

		//p�̃A�h���X�𒆐S�ɌJ��Ԃ� ��'\0'���o�Ă���܂ŌJ��Ԃ�
		while (*p)
		{
			//�\���������Ƃ����ɉ��s���邱�ƂŁA�c�����ŕ\�����邱�Ƃ��ł���
			printf("%c\n", *p);
			p++;
		}
		putchar('\n');
	}
}