#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	int* p_a;

	float b[] = {11.1,22.2,33.3,44.4};
	float* p_b;

	int kei,i;
	float f_kei;

	kei = 0;
	p_a = a;
	printf("”z—ñ a = ");
	for (i = 0; i < 6; i++) {
		kei += *p_a;
		p_a++;
	}
	printf("%d\t•½‹Ï = %.3f", kei, (float)kei / i);

	printf("\n");

	f_kei = 0;
	p_b = b;
	printf("”z—ñ b = ");
	for (i = 0; i < 4; i++) {
		f_kei += *p_b;
		p_b++;
	}
	printf("%.3f\t•½‹Ï = %.3f", f_kei, f_kei / i);
}