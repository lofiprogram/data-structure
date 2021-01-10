#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<vector>
#include <algorithm>
#include<set>
#include<string>
#include<unordered_map>
#include<queue>
using namespace std;

void input(int *a) {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
}

void find(int* a) {
	int v1 = 0, v2 = 0;
	int min = a[0], max = a[0];
	int temp;
	queue<int>q;
	for (int i = 1; i < 10; i++) {
		q.push(a[i]);
		if (q.front() > max) {
			max = q.front();
			v2 = i;
		}
		if (q.front() < min) {
			min = q.front();
			v1 = i;
		}
		q.pop();
	}
	temp = a[0];
	a[0] = a[v1];
	a[v1] = temp;
	if (v2 == 0) {
	    v2 = v1;
	}
	//答案错误50就是忽略了这种情况
	//该情况下最大值在a[0],最小值在a[9]
	//两次交换相当于不变
	//故在进行其中一个交换时
	//需重置另一个数的位置
	temp = a[9];
	a[9] = a[v2];
	a[v2] = temp;
}

void output(int* a) {
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}


int main() {
	int a[10];
	input(a);
	find(a);
	output(a);
	return 0;
}

	


