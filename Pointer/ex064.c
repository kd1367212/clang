//ex064.c �� ���ɕ\��
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	
	//�\��

	//*p_ride�̔z��̐����R������R�񃋁[�v������
	for (int i = 0; i < 3; i++)
	{
		//*p_ride[i]����'\0'���o�Ă���܂ŌJ��Ԃ�
		while (*p_ride[i])
		{
			putchar(*p_ride[i]);
			p_ride[i]++;
		}
		putchar('\n');
	}
}