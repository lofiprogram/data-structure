#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main() {
	int a, b;
	char n[70];
	while (scanf("%d %s %d", &a, n, &b) != EOF) {

		int m = strlen(n);
		int num = 0, p = 1;
		for (int i = m-1; i >= 0; i--) {
			int s = n[i];
			if (n[i] >= 'a' && n[i] <= 'f') {
				num += (s-97+10) * p;
				p = p * a;
			}
			if (n[i] >= 'A' && n[i] <= 'F') {
				num += (s - 65 + 10) * p;
				p = p * a;
			}
			if (n[i] >= '0' && n[i] <= '9') {
				num += (s - 48 ) * p;
				p = p * a;
			}
		}
		//n进制转换为十进制。

		int i = 0;
		char str[70];
		do {
			str[i++] = num % b;
			num = num / b;
		} while (num != 0);
		i = i - 1;
		//十进制转换为n进制。

		for (; i >= 0; i--) {
			if (str[i] >= 0 && str[i] <= 9) {
				printf("%d", str[i]);
			}
			if (str[i] >= 10 && str[i] <= 15) {
				printf("%c", str[i] + 55);
			}
		}
		printf("\n");
	}
	return 0;
}

	

