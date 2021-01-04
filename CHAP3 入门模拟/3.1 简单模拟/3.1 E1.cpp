#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int len = (2 * n);
		vector<int>str(len);
		for (int i = 0; i < n; i++) {
			scanf("%d", &str[i]);
			str[n + i] = str[i];
		}
		int m;
		scanf("%d", &m);
		while (m--) {
			int a, b;
			scanf("%d%d", &a, &b);
			int temp, right = 0, left = 0;
			if (a > b) {
				temp = a;
				a = b;
				b = temp;
			}
			for (int i = a + n - 1; i < b + n - 1; i++) {
				right += str[i];
			}
			for (int i = a + n - 2; i > b - 2; i--) {
				left += str[i];
			}
			if (right > left) {
				printf("%d\n", left);
			}
			else {
				printf("%d\n", right);
			}
		}
	}
	return 0;
}

//使用过多for进行遍历导致时间超额，不符合题目要求时间。
//方法2中计算距离和读入数据变为一步，仅进行一次遍历，计算时无需再遍历。



