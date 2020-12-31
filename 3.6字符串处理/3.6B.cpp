#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main(){
	char a[101];
	while (gets_s(a)) {
		//使用scanf无法读入' '，故使用gets。
		int i = 0;
		int len = strlen(a);
		for (; i<len ; i++){

			if (a[0] >= 97 && a[0] <= 122) {
				a[0] -= 32;
			}
			//首字母。

			if (a[i] == ' ' && a[i + 1] >= 97 && a[i + 1] <= 122) {
				a[i + 1] -= 32;
			}
			//不仅需要为' '，还需要其后为小写字母。

			if (a[i] == '\t' && a[i + 1] >= 97 && a[i + 1] <= 122) {
				a[i + 1] -= 32;
			}

			if (a[i] == '\r' && a[i + 1] >= 97 && a[i + 1] <= 122) {
				a[i + 1] -= 32;
			}

		}
		puts(a);
		//printf("%s\n", a);
		//puts函数会在字符串末尾自动添加\n，printf需要如上才有相同效果。
	}
    return 0;
}

	

