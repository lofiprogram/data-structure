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
#include <iomanip>
using namespace std;


struct fruit {
	string name;
	int price;
	friend bool operator < (fruit f1, fruit f2) {
		return f1.price > f2.price;
	}
}f1, f2, f3;

/*
struct fruit {
	string name;
	int price;
}f1, f2, f3;
*/

struct cmp {
	bool operator () (fruit f1, fruit f2) {
		return f1.price > f2.price;
	}
};

int main() {
	priority_queue<fruit>q;
	//priority_queue<fruit, vector<fruit>, cmp>q;
	f1.name = "桃子"; f1.price = 3;
	f2.name = "梨子"; f2.price = 4;
	f3.name = "苹果"; f3.price = 1;
	q.push(f1); q.push(f2); q.push(f3);
	cout << q.top().name << q.top().price << endl;
	return 0;
}

	

