#include<stdio.h>
main()
{
	int reki;
	printf("西暦を入力:"); scanf("%d", &reki);
	if (reki % 4 == 0) {
		printf("うるう年です");
	}
	else {
		printf("うるう年ではないです");
	}
}