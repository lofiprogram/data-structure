#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
			for (int i = 0; i <= n; i++) {
				int a, b, c;
				scanf("%d%d%d", &a, &b, &c);
				if ((a + b) > c)
					printf("Case #%d: true\n", i+1);
				else 
					printf("Case #%d: false\n", i+1);
			}
		}
	}
	return 0;
}

//VS可以通过，OJ运行答案错误。

#include<iostream>
#include<string>
using namespace std;
int main() {
	int i, n;
	while (cin >> n) {
		for (i = 1; i <= n; i++) {
			int64_t a, b, c;
			cin >> a >> b >> c;
			if ((a + b) > c)
				cout << "Case #" << i << ": true" << endl;
			else
				cout << "Case #" << i << ": false" << endl;
		}
	}
	return 0;
}

//能通过OJ。

