#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

int main() {
	char str[80];
	int len, n1, n2, t;
	while (scanf("%s", str) != EOF) {
		len = strlen(str);
		n1 = (len + 2) / 3;
		n2 = (len + 2) - 2 * n1;
		t = n2 - 2;
		for (int i = 0; i < n1-1; i++) {
			printf("%c", str[i]);
			for (int j = 0; j < t; j++) {
				printf(" ");
			}
			printf("%c\n", str[len - 1 - i]);
		}
		for (int i = n1-1; i < n1-1+n2; i++) {
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}

	

