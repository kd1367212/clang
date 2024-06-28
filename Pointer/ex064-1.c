//ex064.c 解答 縦に表示
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char* p;
	//表示

	//*p_rideの配列の数が３つだから３回ループさせる
	for (int i = 0; i < 3; i++)
	{
		//pにp_ride[i]のアドレスを格納する
		p = p_ride[i];

		//pのアドレスを中心に繰り返す ※'\0'が出てくるまで繰り返す
		while (*p)
		{
			//表示したあとすぐに改行することで、縦書きで表示することができる
			printf("%c\n", *p);
			p++;
		}
		putchar('\n');
	}
}