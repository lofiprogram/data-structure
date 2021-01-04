#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main() {
	int m;
	while (scanf("%d", &m) != EOF, m) {
		unsigned int  a, b;
		scanf("%d%d", &a, &b);
		unsigned int sum = a + b;
		int str[70];
		int i = 0;
		do {
			str[i++] = sum % m;
			sum = sum / m;
		} while (sum != 0);
		i = i - 1;
		for (; i >= 0; i--) {
			printf("%d", str[i]);
		}
		printf("\n");
	}
	return 0;
}

//注意输入的两个数相加后的结果可能会超过int和long的范围。
/*
早期的操作系统是16位系统，

int用二字节表示，范围是-32768~32767；

long用4字节表示，范围是-2147483648~2147483647。

后发展1653到32位操作系统，

int 用4字节表示，与long相同。

目前的操作系统已发展到64位操作系统，但因程序编译工艺的不同，两者表现出不同的差别：

32位编译系统：int占四字节，与long相同。

64位编译系统：int占四字节，long占8字节，long数据范围变为：-2^63~2^63-1
*/

