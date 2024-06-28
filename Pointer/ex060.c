#include<stdio.h>
main()
{
	char data[9] = "Language";
	char moji, * p_data, * p_moji;
	int cnt[8];
	p_data = data;
	printf("data[ ] = %s\n", p_data);
	printf("ŒŸõ•¶š‚ÍH>>>"); scanf("%c", &moji);
	p_moji = &moji;
	for (int i = 1; *p_data; i++)
	{
		if (*p_data == *p_moji)
		{
			cnt[i - 1] = i;
		}
		p_data++;
	}
	
	printf("ŒŸõŒ‹‰Ê‚ÍA");
	for (int i = 0; i < 8; i++)
	{
		if (i + 1 == cnt[i])
		{
			printf("%d ", cnt[i]);
		}
	}
	printf("•¶š–Ú‚Å‚·");
}