#include<stdio.h>
main()
{
	long byo, hh, mm, ss;
	printf("秒数を入力:"); scanf("%ld", &byo);
	if (byo >= 0) {
		if (byo <= 5000) {
			ss = byo % 60;
			mm = byo / 60;
			hh = mm / 60;
			mm = mm % 60;
			printf("%ld 時間 %ld 分 %ld 秒です", hh, mm, ss);
		}
		else {
			printf("エラー");
		}
	}
	else {
		printf("マイナスはエラーです");
	}
}
	/*long byo, hh, mm, ss;
	printf("秒数を入力:"); scanf("%ld", &byo);
	hh = byo / 3600;
	mm = (byo / 60) - hh * 60;
	ss = byo % 60;
	printf("%ld 時間 %ld 分 %ld 秒です", hh, mm, ss);
}	*/