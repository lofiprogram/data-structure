#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>

using namespace std;

int main() {
	int a, b;
	//若直接赋值给int数组a，b，例如值24，此时a[0]=24,而不是a[0]=2。
	while (scanf("%d%d", &a, &b) != EOF) {
		int c[10] = {}, d[10] = {};
		int sum = 0;
		for (int i = 0; a != 0; i++) {
			c[i] = a % 10;
			a /= 10;
		}
		//十进制求每位上的数。
		for (int i = 0; b != 0; i++) {
			d[i] = b % 10;
			b /= 10;
		}
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				sum += c[i] * d[j];
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
