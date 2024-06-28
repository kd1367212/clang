// 1103003 kadai099.c
#include<stdio.h>
main()
{
	int su,i,j,cnt; char moji[100];
	printf("‰ñ”‚Æ•¶š‚ğ“ü—Í  "); scanf("%d %s", &su, &moji);
	//•¶š”ƒJƒEƒ“ƒg
	for (i = 0; moji[i] != '\0'; i++) {}

	for (i = 0; i < su; i++) {
		for (j = 0; moji[j] != '\0'; j++) {
			printf("%c", moji[j]);
		}
		printf("\t");
	}
}