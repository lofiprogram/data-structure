#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

int main() {
	int h;
	while (scanf("%d", &h) != EOF) {
		int m = (2 * (h - 1)) + h;
		int x1 = m - h, x2 = h;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < x1; j ++ ) {
				printf(" ");
			}
			x1 += -2;
			for (int k = 0; k < x2; k++) {
				printf("*");
			}
			x2 += 2;
			printf("\n");
		}
	}
	return 0;
}

	

