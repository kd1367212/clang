//ex068-1.c ��
#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("���l���R����:");
	ret = scanf("%d %d %d", &a, &b, &c);//scanf�֐��̖߂�l�̓f�[�^�̌���Ԃ�
	printf("ret:%d\ta:%d\nb:%d\tc:%d", ret, a, b, c);

	/*printf("���l�������(ctrl+z�ŏI��)�F")
	while (scanf("%d", &a) != eof)
	{
		printf("���l�F%d\n", a);
		printf("���l�������(ctrl+z�ŏI��)�F")
	}*/
}