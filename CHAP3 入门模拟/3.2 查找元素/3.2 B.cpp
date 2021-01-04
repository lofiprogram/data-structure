#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int str[200] = {};
		for (int i = 0; i < n; i++) {
			scanf("%d", &str[i]);
		}
		int t;
		scanf("%d", &t);
		int m = -1;
		for (int i = 0; i < n; i++) {
			if (str[i] == t)
				m = i;
		}
		printf("%d\n", m);
	}
	return 0;
}
