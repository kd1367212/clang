#include<stdio.h>
main()
{
	/*
	long byo, hh, mm, ss;
	printf("�b�������:"); scanf("%ld", &byo);
	if (byo <= 5000) {
		ss = byo % 60;
		mm = byo / 60;
		hh = mm / 60;
		mm = mm % 60;c
		printf("%ld ���� %ld �� %ld �b�ł�", hh, mm, ss);
	}
	else {
		printf("�G���[");
	}*/
	long byo, hh, mm, ss;
	printf("�b�������:"); scanf("%ld", &byo);
	hh = byo / 3600;
	mm = (byo / 60) - hh * 60;
	ss = byo % 60;
	printf("%ld ���� %ld �� %ld �b�ł�", hh, mm, ss);
}