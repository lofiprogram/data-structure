#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
using namespace std;

const int maxn = 100001;
int str[maxn] = {};

int main() {
	int n;
	scanf("%d", &n);
	int id, score;
	for (int i = 1; i <= n; i++) {
		scanf("%d%d", &id, &score);
		str[id] += score;
	}
	int k = 1, max = -1;
	for (int i = 1; i <= n ; i++) {
		if (str[i] > max) {
			k = i;
			max = str[i];
		}
	}
	printf("%d %d\n", k, max);
	return 0;
}

	

