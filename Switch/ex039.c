#include<stdio.h>
main()
{
	char flag; float ia, ib, ic;
	printf("��������� : "); scanf("%c", &flag);
	printf("��������� : "); scanf("%f %f %f", &ia, &ib, &ic);
	if (flag < 'a') {
		flag += 0x20;
	}
	switch (flag) {
	case 'd':
		if (ia >= ib) {
			if (ia >= ic) {
				printf("�ő�l�� %.0f�ł�", ia);
			}
			else {
				printf("�ő�l�� %.0f�ł�", ic);
			}
		}
		else if (ib >= ic) {
			printf("�ő�l�� %.0f�ł�", ib);
		}
		else {
			printf("�ő�l�� %.0f�ł�", ic);
		}
		break;

	case 's':
		if (ia <= ib) {
			if (ia <= ic) {
				printf("�ŏ��l�� %.0f�ł�", ia);
			}
			else {
				printf("�ŏ��l�� %.0f�ł�", ic);
			}
		}
		else if (ib <= ic) {
			printf("�ŏ��l�� %.0f�ł�", ib);
		}
		else {
			printf("�ŏ��l�� %.0f�ł�", ic);
		}
		break;

	case 'g':
		printf("���v�� %.0f�ł�", ia + ib + ic);
		break;

	case 'h':
		printf("���ς� %.2f�ł�", (ia + ib + ic) / 3);
		break;

	default:
		printf("�G���[");
		break;
	}
}