//версия, выводящая справа налево
//алгоритм замещения
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdint.h>
#include <math.h>



int main()
{

	int i;
	int c;
	int a;
	scanf("%d", &i);

	do
	{
		c = i;
		i = i / 2;
		a = 2 * i;
		if (c == a)
		{

			printf("0");

		}
		else
		{

			printf("1");

		}
	} while (i > 0);

	return 0;
}