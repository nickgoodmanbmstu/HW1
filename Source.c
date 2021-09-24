

//works with negative numbers + beautified
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int v;
	int z;
	int a;
	int c[64];
	int i = 0;
	//int x = 0;
	scanf("%d", &v);
	if (v == -1) printf("-1");
	
	
	else
	{ 
		if (v == 1) printf("1");
		else
		{
			do {
				z = v;
				v = v / 2;
				a = 2 * v;
				if (z == a) {
					c[i] = 0;
					//printf("0");
					i++;
				}
				else {

					//printf("1");
					c[i] = 1;
					//printf("0");
					i++;
				}
			} while (v > 1);
			c[i] = v;
			for (i; i >= 0; i--) printf("%d", c[i]);
		}
	}
	return 0;
}