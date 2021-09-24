//проверить значение, возвращаемое функцией scanf - done
//works with negative numbers + beautified
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int v = 0;
	int z;
	int a;
	int c[64];
	int i = 0;
	
	

	int b = scanf("%d", &v);
	
	if (b == 0) printf("Sorry, this is not a number");
	else
	{


		if (v < -32767) printf("Sorry, the number is too large");

		else {
			if (v > 32766) printf("Sorry, the number is too large");
			else {
				if (v == 1) printf("1");
				else {
					if (v == -1) printf("-1");
					else {
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
			}
		}
		return 0;
	}
	
}
