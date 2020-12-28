#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main() {
	int m;
	while (scanf("%d", &m) != EOF, m) {
		unsigned int  a, b;
		scanf("%d%d", &a, &b);
		unsigned int sum = a + b;
		int str[70];
		int i = 0;
		do {
			str[i++] = sum % m;
			sum = sum / m;
		} while (sum != 0);
		i = i - 1;
		for (; i >= 0; i--) {
			printf("%d", str[i]);
		}
		printf("\n");
	}
	return 0;
}

	

