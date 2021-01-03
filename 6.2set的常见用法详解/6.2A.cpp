#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<vector>
#include <algorithm>
#include<set>
using namespace std;

set<int>v[55];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		int num, temp;
		scanf("%d", &num);
		for (int j = 0; j < num; j++) {
			scanf("%d", &temp);
			v[i].insert(temp);
		}
	}

	int m;
	scanf("%d", &m);
	int x, y;
	for (int i = 0; i < m; i++) {
		scanf("%d%d", &x, &y);
		int sim = 0, sum = v[x].size() + v[y].size();
		for (set<int>::iterator k = v[x].begin(); k != v[x].end(); k++) {
			if (v[y].find(*k) != v[y].end()) {
				sim++;
				sum--;
			}
		}
		printf("%.1f%%\n", 100.0 * sim / sum);
	}
	return 0;
}

/*


set里没有v[x][i]==v[y][j]这种用法
要想访问v[x]里的值只能使用iterator
本代码使用的是find，find函数的时间复杂度为O(logN)
也可这样写：
for (set<int>::iterator k = v[x].begin(); k != v[x].end(); k++) {
	for (set<int>::iterator s = v[y].begin(); s != v[y].end(); s++) {
		if (*k == *s) {
			sim++;
			sum--;
		}
	}
}
如此写在编译器中也能得到结果，但在OJ中会提示时间超限
应该是两个for循环的时间复杂度O(N^2)导致的


*/

