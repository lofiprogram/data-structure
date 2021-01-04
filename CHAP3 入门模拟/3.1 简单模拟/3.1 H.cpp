#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<vector>

using namespace std;

int main() {
	long long a, b;
	int c, d;
	while (scanf("%lld%d%lld%d", &a, &c, &b, &d) != EOF) {
		//long long型数据的输入输出均为%lld。
		long long sum1 = 0, sum2 = 0;
		int t1 = c, t2 = d;
		for (int i = 0; i < 10; i++) {

			if ((a % 10) == c) {
				sum1 += t1;
				t1 *= 10;
			}
			a /= 10;

			if ((b % 10) == d) {
				sum2 += t2;
				t2 *= 10;
			}
			b /= 10;
		}
		printf("%lld\n", sum1 + sum2);
	}
	return 0;
}

