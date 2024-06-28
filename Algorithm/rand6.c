#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ia, ib;
	printf("何を出しますか\n（１：グー　２：チョキ　3：パー）＞"); scanf("%d", &ia);

	srand(time(0));
	ib = rand() % 2 + 1;
	
	switch (ia) {
	case 1:
		printf("プレイヤーは、グーです。\n");
		break;

	case 2:
		printf("プレイヤーは、チョキです。\n");
		break;

	case 3:
		printf("プレイヤーは、パーです。\n");
		break;
	}

	switch (ib) {
	case 0:
		printf("コンピュータは、グーです。\n");
		break;

	case 1:
		printf("コンピュータは、チョキです。\n");
		break;

	case 2:
		printf("コンピュータは、パーです。\n");
		break;
	}


	if (ia - 1 == ib) {
		printf("あいこです。");
	}
	else if (ia == 1 && ib == 1) {
		printf("プレイヤーの勝ちです。");
	}
	else if(ia == 2 && ib == 2) {
		printf("プレイヤーの勝ちです。");
	}
	else if (ia == 3 && ib == 0) {
		printf("プレイヤーの勝ちです。");
	}
	else {
		printf("コンピュータの勝ちです。");
	}
}