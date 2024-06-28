#include<stdio.h>
main()
{
	char data1[100], data2[100],change[100];
	int i;
	printf("•¶Žš—ñ‚P‚ð“ü—Í : "); scanf("%s", &data1);
	printf("•¶Žš—ñ‚Q‚ð“ü—Í : "); scanf("%s", &data2);
	printf("moji1 = %s\tmoji2 = %s\n", data1, data2);
	//“ü‚ê‘Ö‚¦
	for (i = 0; data1[i] != '\0'; i++) {
		change[i] = data1[i];
	}
	change[i] = '\0';
	
	for (i = 0; data2[i] != '\0'; i++) {
		data1[i] = data2[i];
	}
	data1[i] = '\0';

	for (i = 0; change[i]; i++) {
		data2[i] = change[i];
	}
	data2[i] = '\0';

	printf("%s", data2);
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("moji1 = %s\tmoji2 = %s", data1, data2);
}