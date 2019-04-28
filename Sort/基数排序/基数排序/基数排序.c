#include <stdio.h>

int main(void)
{
	int a[] = { 887,545,123,486,159,751 };
	int b[sizeof(a) / sizeof(int)];

	for (int k = 0; k < 3; k++)//循环三次为了排个十百位
	{
		for (int j = 0; j < 10; j++)//循环10次从0到9对比最小位
		{
			for (int i = 0; i < sizeof(a) / sizeof(int); i++)//循环a{}={*}位 有几位循环几位
			{
				if (k == 0)//个位
				{
					if (a[i] % 10 == j)//取个位对比
					{

						b[i] = a[i];
						printf("%d \n", b[i]);
					}
				}
				else if (k == 1)//十位
				{
					if (a[i] / 10 % 10 == j)//取十位对比
					{
						b[i] = a[i];
						printf("%d \n", b[i]);
					}
				}
				else if (k == 2)//百位
				{
					if (a[i] / 100 == j)//取百位对比
					{
						b[i] = a[i];
						printf("%d \n", b[i]);
					}
				}
			}
		}printf("\n\n");
	}
	return 0;
}