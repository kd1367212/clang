#include<stdio.h>
main()
{
	char d[21];
	int k[21], s, i;
	printf("暗号化した文字列を入力してください>>>"); scanf("%s", &d);
	for (i = 0; d[i] != '\0'; i++) {
		printf("復号キー%d>>>", i + 1); scanf("%x", &k[i]);
		d[i] -= k[i];
	}
	printf("復号済み文字列は、");
	for (i = 0; d[i] != '\0'; i++) {
		printf("%c", d[i]);
	}
}