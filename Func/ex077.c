//ex077.c ��	main����
#include<stdio.h>
void maxmin(int x, int y,int z, int *saidai, int *saisho);

main()
{
	//a b c �͓��͂��ꂽ���l���i�[
	//a �� x�Ab �� y�Ac �� z �ƘA��

	//max �ɍő�l�Amin �ɍŏ��l���i�[
	//max �� *saidai�Amin �� *saisho �ƘA��

	int a, b, c, max, min;

	printf("�������R����"); scanf("%d%d%d", &a, &b, &c);

	maxmin(a, b, c, &max, &min);

	printf("�ő�l = %d �ŏ��l = %d", max, min);
}


//ex077.c ��	maxmin����
void maxmin(int x, int y,int z, int* saidai, int* saisho)
{
	//x > y �^�F(x > z �^�Fx �U�Fz) �U�F(y > z �^�Fy �U�Fz)
	*saidai = (x > y) ? ((x > z) ? x : z) : (y > z) ? y : z;


	//x < y �^�F(x < z �^�Fx �U�Fz) �U�F(y < z �^�Fy �U�Fz)
	*saisho= (x < y) ? ((x < z) ? x : z) : (y < z) ? y : z;
	/*if (x > y)
	{
		if (x > z)
		{
			//x �� y z �ǂ�������傫���̂� x ���ő�
			*saidai = x;

			if (y > z)
			{
				//x > y > z �ƂȂ�
				*saisho = z;
			}
			else
			{
				//x > z > y �ƂȂ�
				*saisho = y;
			}

			//����ȏ㏈������K�v���Ȃ��̂� main �ɖ߂�
			return;
		}
	}
	else if (y > z)
	{
		//y �� x z �ǂ�������傫���̂� y ���ő�
		*saidai = y;

		if (x > z)
		{
			//y > x > z �ƂȂ�
			*saisho = z;
		}
		else
		{
			//y > z > x�ƂȂ�
			*saisho = x;
		}

		//����ȏ㏈������K�v���Ȃ��̂� main �ɖ߂�
		return;
	}
	else
	{
		//z �� x y �ǂ�������傫���̂� z ���ő�
		*saidai = z;

		if (x > y)
		{
			//z > x > y�ƂȂ�
			*saisho = y;
		}
		else
		{
			//z > y >x �ƂȂ�
			*saisho = x;
		}
	}*/
}