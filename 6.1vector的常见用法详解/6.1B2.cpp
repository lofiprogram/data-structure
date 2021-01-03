#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

const int N = 40010;
const int K = 2510;

vector<int>course[K];
char name[N][5];

bool cmp(int a, int b) {
	return strcmp(name[a], name[b]) < 0;
}


int main() {
	int n, k;
	scanf("%d%d", &n, &k);

	for (int i = 0; i < n; i++) {
		int id, num;
		scanf("%s %d", name[i], &num);
		for (int j = 0; j < num; j++) {
			scanf("%d", &id);
			course[id].push_back(i);
		}
	}

	for (int i = 1; i <= k; i++) {
		printf("%d %d", i, course[i].size());
		sort(course[i].begin(), course[i].end(), cmp);
		for (int j = 0; j < course[i].size(); j++) {
			int t = course[i][j];
			printf("\n%s", name[t]);
		}
		printf("\n");
	}
	return 0;
}


//

/*
https://blog.csdn.net/chenghao_test/article/details/70143303
*/




