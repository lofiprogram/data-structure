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
#include<map>
#include<queue>
#include <iomanip>
using namespace std;

struct task {
	string name;
	int prior;
	//task() {
	//	name.clear();
	//	prior = 0;
	//}
	friend bool operator < (task t1, task t2) {
		if (t1.prior != t2.prior)
			return t1.prior > t2.prior;
		else
			return t1.name > t2.name;
	}
};

priority_queue<task>q;
map<string, int>m;

int main() {
	int n;
	while (cin>>n) {
		for (int i = 0; i < n; i++) {
			string temp, temptask;
			cin >> temp;
			int left = temp.find("(");
			int right = temp.find(")");
			if (i == 0)m[temp.substr(0, left)] = 0;
			for (int i = left + 1; i <= right; i++) {
				if (temp[i] == ',' || i == right) {
					if (temptask == "NULL")break;
					m[temptask] = m[temp.substr(0, left)] + 1;
					temptask.clear();
					continue;
				}
				temptask += temp[i];
			}
		}
		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
			task tmp;
			tmp.name = it->first;
			tmp.prior = it->second;
			q.push(tmp);
		}
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				cout << q.top().name;
				q.pop();
			}
			else {
				cout << " " << q.top().name;
				q.pop();
			}
		}
		printf("\n");
		m.clear();
	}
	return 0;
}

//如果要读入和输出整个字符串
//则只能使用cin和cout

