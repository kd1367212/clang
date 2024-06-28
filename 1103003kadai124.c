#include<stdio.h>
main()
{
	char c, * p_c=&c;
	printf("‚P•¶Žš“ü—Í"); scanf("%c", &c);
	c += 0x01;
	printf("ŽŸ‚Ì•¶Žš‚Í %c", *p_c);
}