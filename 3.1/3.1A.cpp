#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>
#include<malloc.h>
#include<vector>
using namespace std;


int main() {
	int L, M;
	while (scanf("%d%d", &L, &M) != EOF, L || M) {
		vector<int>c(L+1);
		int a, b, n = 0;
		while (M--) {
			scanf("%d%d", &a, &b);
			for (int i = a; i <=b ; i++) {
				c[i] = 1;
			}
		}
		for (int i = 0; i < L+1; i++) {
			if (c[i] == 0) {
				n++;
			}
		}
		printf("%d\n", n);
	}
	
	return 0;
}
