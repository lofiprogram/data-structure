#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;


int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[100] = {}, b[100] = {};
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		int m;
		scanf("%d", &m);
		int i, j;
		for (i = 0; i < m; i++) {
			scanf("%d", &b[i]);
			for (j = 0; j < n; j++) {
				if (b[i] == a[j]) {
					printf("YES\n");
					break;
				}
			}
			if (j == n)
				printf("NO\n");
		}
	}
	return 0;
}

	

