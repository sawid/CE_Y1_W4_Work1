#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);
	int m = x-1;
	int n = 1;
	for (int i = 0; i < x; i++)
	{
			for (int k = 0; k < m; k++)
			{
				printf(" ");
			}
			for (int l = 0; l < n; l++)
			{
				printf("*");
			}
		n += 2;
		m--;
		printf("\n");
	}
}