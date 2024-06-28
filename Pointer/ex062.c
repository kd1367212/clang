//ex062.c 解答
#include<stdio.h>
main()
{
	char* p="peach";
	char data1[10] = "banana", * p_data1;
	char data2[10], * p_data2;

	//data1に格納されている文字列をdata2に格納する

	//アドレスを格納
	p_data1 = data1; p_data2 = data2;

	while (*p_data1)  //もともとwhile(*p_data1 != '\0')であるが　!= '\0'を省略することができる
	{
		*p_data2 = *p_data1;
		p_data1++; p_data2++;
	}

	//最後に '\0'を格納
	*p_data2 = '\0';

	//pに格納されている文字列をdata1に格納する
	p_data1 = data1;

	//別解	*pに*p_data1のデータを入れたあと、どちらも +1 することを繰り返す(「++」があと置きのため)
	//'\0'もコピーされるためコンパクトになる
	while (*p_data1++ = *p++);

	//表示

	p_data1 = data1; p_data2 = data2;
	
	printf("data1[ ] = ");
	while (*p_data1)
	{
		putchar(*p_data1++);
	}

	putchar('\n');

	printf("data2[ ] = ");
	while (*p_data2)
	{
		putchar(*p_data2++);
	}
}