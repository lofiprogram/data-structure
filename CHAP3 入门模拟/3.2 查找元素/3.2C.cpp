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
//在合适的题目里定义结构体比使用二维数组方便很多。

int main() {
	int n,t,i,j;
	//如要在循环外对某个值进行访问，不能将值写在for循环之中。
	//为了方便查阅写在开头更清晰。
	char aim[10];
	while (scanf("%d", &n) != EOF) {
		for (i = 0; i < n; i++) {
			scanf("%s %s %s %d", stu[i].id, stu[i].name, stu[i].sex, &stu[i].age);
			//%s遇空格或回车结束输入。
			//只有%c是读取空格的。
		}
		scanf("%d", &t);
		while (t--) {
			scanf("%s", aim);
			for (j = 0; j < n; j++) {
				if (strcmp(aim,stu[j].id)==0) {
					//对于字符串来说没有(aim==stu[j].name)这样的比较大小。
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

//这种题目对格式要求较多，OJ答案错误非常浪费时间。
//问题多出在例如id、name、sex的数组大小上。

//该题目中为什么使用char数组来接收003，
//是因为%03d这种格式非常受限，如输入样例为0001则无法满足。
//因此在改变时，也应该把原本的int型的比较更换为char数组的比较。


	

