#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int getid(char* name) {
	int id = 0;
	for (int i = 0; i < 3; i++) {
		id = 26 * id + (name[i] - 'A');
	}
	id = id * 10 + (name[3] - '0');
	return id;
}

const int maxn = 26 * 26 * 26 * 10 + 10;
vector<int>v[maxn];

int main() {
	int n, k, no, num, id = 0;
	char name[5];
	scanf("%d%d", &n, &k);
	for (int i = 0; i < k; i++) {
		scanf("%d%d", &no, &num);
		for (int j = 0; j < num; j++) {
			scanf("%s", name);
			id = getid(name);
			v[id].push_back(no);
		}
	}
	for (int i = 0; i < n; i++) {
		scanf("%s", name);
		id = getid(name);
		sort(v[id].begin(), v[id].end());
		printf("%s %d", name, v[id].size());
		for (int j = 0; j < v[id].size(); j++) {
			printf(" %d", v[id][j]);
		}
		printf("\n");
	}	
	return 0;
}


//分析：考虑到string、cin、cout会超时，可以使用hash(26*26*26*10+10)将学生姓名变为int型，然后存储在vector里面。

/*
https://blog.csdn.net/liuchuo/article/details/52154133
*/




