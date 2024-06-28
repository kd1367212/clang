//ex068.c 解答
#include<stdio.h>
main()
{
	int c;
	char dumy[256];

	c = getchar();//文字を入力したあと
				//文字に対応する数値(16進数)が c に格納される

	//getchar ctrl+ZでEOFがはいる
	//EOF(-1として扱われる) End Of File

	while (c != EOF)//データ入力の完了 ctrl+Z
	{
		putchar(c);//c に格納されている数値を文字と対応させて表示
		putchar('\n');
		gets(dumy);//入力バッファをクリア

		//getcharは入力したあと、エンターを押すがそのエンター(改行)も
		//文字として入力される(２文字目以降はバッファに自動で格納される)
		// 
		//getcharで入力した文字は printf または putchar で取り出されるが
		//すべて取り出されるまで入力できない(=バッファの中にまだ文字がある)
		// 
		//gets関数でバッファの中身を空にする(dumy[256]を代入する)ことで
		//再度 getchar関数で入力できるようになる

		c = getchar();
	}
	
}