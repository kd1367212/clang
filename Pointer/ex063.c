//ex063.c ��
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	
	//�\��

	//*p_ride�̔z��̐����R������R�񃋁[�v������
	for (int i = 0; i < 3; i++)
	{

		//���ʂ̔z��̂悤�Ɏg���΂������[ ���������u%c�v�ł͂Ȃ��u%s�v�ŕ\�����邱��
		printf("%s\n", p_ride[i]);
	}
}