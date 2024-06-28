//ex070.c 解答
#include<stdio.h>
int add(int a, int b);//プロトタイプ宣言
main()
{
	int a, b, kotae;
	printf("整数を２つ入力："); scanf("%d%d", &a, &b);
	kotae = add(a, b);//関数addを呼び出し
	printf("合計は%dです", kotae);
}

//関数addの宣言
int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);//関数の結果を返す
}