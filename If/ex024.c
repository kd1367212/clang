#include<stdio.h>
main()
{
	char hantei1, hantei2, flag;
	hantei1 = 'A'; hantei2 = 'a';
	printf("文字を入力:"); scanf("%c", &flag);
	if (hantei1 <= flag && hantei2 > flag) {
		printf("大文字です");
	}
	else {
		printf("その他の文字です");
	}
}