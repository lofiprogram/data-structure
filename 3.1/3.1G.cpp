#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<vector>

using namespace std;

int main() {
	int n;
	while(scanf("%d",&n)!=EOF){
		vector<int>str(n);
		int sum1 = 0, m1 = 0, sum2 = 0, m2 = 0;
		int n1 = 0, n2 = 0, x = 1, k = 0;
		double sum3 = 0;
		for (int i = 0; i < n; i++) {
			scanf("%d", &str[i]);

			if (str[i] % 5 == 0 && str[i] % 2 == 0) {
				m1++;
				sum1 += str[i];
			}
			//不应该用sum1==0来直接进行判断，应考虑到0的情况。

			if (str[i] % 5 == 1) {
				m2++;
				sum2 += x * str[i];
				x *= -1;
			}
			//不应该用sum2==0来直接进行判断，应考虑到正反求和最后结果刚好为0的情况。

			if (str[i] % 5 == 2)
				n1++;

			if (str[i] % 5 == 3) {
				n2++;
				sum3 += str[i];
			}

			if (str[i] % 5 == 4 && str[i] > k)
				k = str[i];
		}
		if (m1 == 0)
			printf("N ");
		else
			printf("%d ", sum1);
		if (m2 == 0)
			printf("N ");
		else
			printf("%d ", sum2);
		if (n1 == 0)
			printf("N ");
		else
			printf("%d ", n1);
		if (n2 == 0)
			printf("N ");
		else
			printf("%.1lf ", sum3/n2);
		if (k == 0)
			printf("N\n");
		else
			printf("%d\n", k);
	}
	return 0;
}

//该题目也可用switch(str[i]%5)来进行简化，且此题无需用数组存放数据，因为后期需求不需要再读取内容（仅作判断使用）。
