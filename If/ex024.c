#include<stdio.h>
main()
{
	char hantei1, hantei2, flag;
	hantei1 = 'A'; hantei2 = 'a';
	printf("•¶Žš‚ð“ü—Í:"); scanf("%c", &flag);
	if (hantei1 <= flag && hantei2 > flag) {
		printf("‘å•¶Žš‚Å‚·");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}