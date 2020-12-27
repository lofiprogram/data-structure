#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

int main() {
	int n;
	char c;
	while (scanf("%d %c", &n,&c) != EOF) {
		int row;
		if (n % 2 == 1)
			row = (n + 1) / 2;
		else
			row = n / 2;
		
		for (int i = 0; i < n; i++) {
			printf("%c", c);
			}
		printf("\n");

		for (int i = 2; i < row; i++) {
			printf("%c", c);
			for (int j = 0; j < n - 2; j++) {
				printf(" ");
			}
			printf("%c\n", c);
		}

		for (int i = 0; i < n; i++) {
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
}

	

