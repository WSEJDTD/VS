#include <stdio.h>

int main(void)
{
	int a[] = { 887,545,123,486,159,751 };
	int b[sizeof(a) / sizeof(int)];

	for (int k = 0; k < 3; k++)//ѭ������Ϊ���Ÿ�ʮ��λ
	{
		for (int j = 0; j < 10; j++)//ѭ��10�δ�0��9�Ա���Сλ
		{
			for (int i = 0; i < sizeof(a) / sizeof(int); i++)//ѭ��a{}={*}λ �м�λѭ����λ
			{
				if (k == 0)//��λ
				{
					if (a[i] % 10 == j)//ȡ��λ�Ա�
					{

						b[i] = a[i];
						printf("%d \n", b[i]);
					}
				}
				else if (k == 1)//ʮλ
				{
					if (a[i] / 10 % 10 == j)//ȡʮλ�Ա�
					{
						b[i] = a[i];
						printf("%d \n", b[i]);
					}
				}
				else if (k == 2)//��λ
				{
					if (a[i] / 100 == j)//ȡ��λ�Ա�
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