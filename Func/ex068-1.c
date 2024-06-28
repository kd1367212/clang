//ex068-1.c 解答
#include<stdio.h>
main()
{
	int a, b, c, ret;
	printf("数値を３つ入力:");
	ret = scanf("%d %d %d", &a, &b, &c);//scanf関数の戻り値はデータの個数を返す
	printf("ret:%d\ta:%d\nb:%d\tc:%d", ret, a, b, c);

	/*printf("数値を一つ入力(ctrl+zで終了)：")
	while (scanf("%d", &a) != eof)
	{
		printf("数値：%d\n", a);
		printf("数値を一つ入力(ctrl+zで終了)：")
	}*/
}