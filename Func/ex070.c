//ex070.c ��
#include<stdio.h>
int add(int a, int b);//�v���g�^�C�v�錾
main()
{
	int a, b, kotae;
	printf("�������Q���́F"); scanf("%d%d", &a, &b);
	kotae = add(a, b);//�֐�add���Ăяo��
	printf("���v��%d�ł�", kotae);
}

//�֐�add�̐錾
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);//�֐��̌��ʂ�Ԃ�
}