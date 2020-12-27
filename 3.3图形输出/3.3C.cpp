#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

int main() {
	int m;
	while (scanf("%d", &m) != EOF) {

		while (m--) {
			int h;
			scanf("%d", &h);
			int d = h + 2 * (h - 1);
			int t1 = h - 1, t2 = h;
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < t1; j++) {
					printf(" ");
				}
				for (int j = 0; j < t2; j++) {
					printf("*");
				}
				for (int j = 0; j < t1; j++) {
					printf(" ");
				}
				printf("\n");
				t1--;
				t2 += 2;
			}
		}

	}
	return 0;
}

	

