//ex069.c ��
#include<stdio.h>
main()
{
	int su, kei=0,cnt=0;
	printf("�����F");
	
	while (scanf("%d",&su) != -1)//ctrl+Z�������ꂽ�烋�[�v���I������
								//EOF �܂��� -1�ŗǂ�
	{
		kei += su;
		cnt++;
		printf("�����F");
	}

	printf("���v=%d ����=%.2f", kei, (float)kei / cnt);
}