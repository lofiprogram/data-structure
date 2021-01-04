#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

struct students {
	int id;
	char name[50];
	char sex[20];
	int age;
}stu[20];

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--) {
		//因为缺少这步出错，考虑清楚循环条件。
			int m;
			scanf("%d", &m);
			for (int i = 0; i < m; i++) {
				scanf("%d%s%s%d", &stu[i].id, stu[i].name, stu[i].sex, &stu[i].age);
			}
			int t;
			scanf("%d", &t);
			for (int i = 0; i < m; i++) {
				if (t == stu[i].id)
					printf("%d %s %s %d\n", stu[i].id, stu[i].name, stu[i].sex, stu[i].age);
			}
		}
	}
	return 0;
}

	

