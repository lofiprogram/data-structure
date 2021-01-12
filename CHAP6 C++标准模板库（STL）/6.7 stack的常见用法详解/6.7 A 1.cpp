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
#include<stack>
using namespace std;



int main() {
	string s;
	cin >> s;
	stack<char>cal;
	int res;
	for (string::iterator it = s.begin(); it < s.end(); it++) {
		int i = 0;
		int j = 0;
		int k[5];
		int p = 0;
		char c1, c2;
		if (*it != '+' && *it != '-') {
			cal.push(*it);
			i++;
		}
		else {
			if (cal.top() >= '0' && cal.top() <= '9') {
				k[p] = j + (cal.top() - '0');
				j*=10;
				i--;
				cal.pop();
			}
			else if (cal.top() == '*' && cal.top() <= '/') {
				p++;
				c1 = cal.top();
				cal.pop();
				i--;
				j = 0;
			}
			cal.push(*it);
			i++;
			c2 = cal.top();
			i--;			
		}


		if(s.)





	}

	



	return 0;
}
