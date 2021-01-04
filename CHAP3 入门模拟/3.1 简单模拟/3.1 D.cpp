#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		vector<int>str(n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &str[i]);
		}
		int odd=0, even=0;
		for (int i = 0; i < n; i++) {
			if (str[i] % 2 == 0) {
				even++;
			}else {
				odd++;
			}
		}
		if (even > odd) {
			printf("NO\n");
		}else {
			printf("YES\n");
		}
	}
	return 0;
}

