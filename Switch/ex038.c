#include<stdio.h>
main()
{
	int su, ten;
	printf("��������� : "); scanf("%d", &su);
	ten = su / 10;
	switch (ten){
	case 1:
		printf("�P�O�_��ł�");
		break;
	case 2:
		printf("�Q�O�_��ł�");
		break;
	case 3:
		printf("�R�O�_��ł�");
		break;
	case 4:
		printf("�S�O�_��ł�");
		break;
	default:
		printf("�G���[");
		break;
	}
}