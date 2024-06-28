#include<stdio.h>
main()
{
	FILE* fp;

	char str[256];

	int Lv, HP;

	fp = fopen("file02.txt", "r");

	fscanf(fp, "%s", str);

	printf("‘•”õ : %s\n", str);

	fscanf(fp, "%s", str);

	printf("‘•”õ : %s\n", str);

	fscanf(fp, "%s", str);

	printf("‘•”õ : %s\n", str);

	fscanf(fp, "%d%d%s", &Lv, &HP, str);

	printf("Lv : %d HP : %d ‘•”õ : %s", Lv, HP, str);

	fclose(fp);
}