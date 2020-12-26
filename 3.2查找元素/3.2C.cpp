#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<cstring>
using namespace std;

struct student {
	char id[10];
	char name[100];
	char sex[50];
	int age;
}stu[1000];

int main() {
	int n,t,i,j;
	char aim[10];
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%s %s %s %d", stu[i].id, stu[i].name, stu[i].sex, &stu[i].age);
		}
		scanf("%d", &t);
		while (t--) {
			scanf("%s", aim);
			for (j = 0; j < n; j++) {
				if (strcmp(aim,stu[j].id)==0) {
					printf("%s %s %s %d\n", stu[j].id, stu[j].name, stu[j].sex, stu[j].age);
					break;
				}
			}
			if (j == n)
				printf("No Answer!\n");
		}
	}
	return 0;
}

	

