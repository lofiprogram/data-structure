#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0)break;
		//注意阅读题目条件当读到N=0时输入结束。
		//出错情况：结果错误。
		int str[1000] = {};
		for (int i = 0; i < n; i++) {
			scanf("%d", &str[i]);
		}
		int t;
		scanf("%d", &t);
			int m = 0;
			for (int i = 0; i < n; i++) {
				if (str[i] == t)
					m++;
			}
			printf("%d\n", m);
	}
	return 0;
}
