#define _CRT_SECURE_NO_WARNINGS

#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	char a[20] = {}, b[20] = {};
	while (scanf("%s%s", a, b) != EOF,a||b) {
		//写上a||b会导致oj判断输出超限。
		char temp1[20] = {}, temp2[20] = {};
		for (int i = 0, j = 0; a[i] != '\0'; i++) {
			if (a[i] != ',') {
				temp1[j]=a[i];
				//不能使用strcat，因为该函数生效对象是该地址以后的所有字符串。
				j++;
			}
		}
		int c = strlen(temp1), sum1 = 0, n1 = 1;
		for (int i = c - 1; i > 0; i--) {
			sum1 +=( n1 * (temp1[i]-48));
			//char型数字转为int型，0的ASCII码为48。
			n1 = 10 * n1;
		}
		if (temp1[0] == '-') {
			//前置负号单独判断。
			sum1 = (-1) * sum1;
		}
		else {
			sum1 += n1 * (temp1[0]-48);
			//同上
		}

		for (int i = 0,  j = 0; b[i] != '\0'; i++) {
			if (b[i] != ',') {
				temp2[j]=b[i];
				j++;
			}
		}
		int d = strlen(temp2), sum2 = 0, n2 = 1;
		for (int i = d - 1; i > 0; i--) {
			sum2 += (n2 * (temp2[i] - 48));
			n2 = 10 * n2;
		}
		if (temp2[0] == '-') {
			sum2 = (-1) * sum2;
		}
		else {
			sum2 += n2 * (temp2[0]-48);
		}
		printf("%d\n", sum1+sum2);
	}
	return 0;
}
