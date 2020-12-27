#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

void swap(char *p) {
	if (*p == ' ') {
		*p = '*';
	}else{
		*p = ' ';
	}
}

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int m = 2 * n - 1;
		char str[50] = { };
		for (int i = 0; i < m; i++ ) {
			if (i % 2 == 0)
				str[i] = '*';
			if (i % 2 == 1)
				str[i] = ' ';
		}
		printf("%s\n", str);

		int x = 0, y = m;
		for (int i = 1; i < n; i++) {
			for (int i = x; i < y; i++) {
				swap(&str[i]);
			}
			printf("%s\n", str);
			x++;
			y--;
		}
		x = x - 1;
		y = y + 1;
		for (int i = 1; i < n; i++) {
			for (int i = x; i < y; i++) {
				swap(&str[i]);
			}
			printf("%s\n", str);
			x--;
			y++;
		}
	}
	return 0;
}

	

