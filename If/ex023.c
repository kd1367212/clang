#include<stdio.h>
main()
{
	/*
	long byo, hh, mm, ss;
	printf("•b”‚ğ“ü—Í:"); scanf("%ld", &byo);
	if (byo <= 5000) {
		ss = byo % 60;
		mm = byo / 60;
		hh = mm / 60;
		mm = mm % 60;c
		printf("%ld ŠÔ %ld •ª %ld •b‚Å‚·", hh, mm, ss);
	}
	else {
		printf("ƒGƒ‰[");
	}*/
	long byo, hh, mm, ss;
	printf("•b”‚ğ“ü—Í:"); scanf("%ld", &byo);
	hh = byo / 3600;
	mm = (byo / 60) - hh * 60;
	ss = byo % 60;
	printf("%ld ŠÔ %ld •ª %ld •b‚Å‚·", hh, mm, ss);
}