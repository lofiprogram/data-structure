#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;

int main() {
	int a, b, D;
	scanf("%d%d%d", &a, &b, &D);
	int sum = a + b;
	int s[35];
	int i = 0;
	if (sum = 0) {
		printf("0");
	}
	
	//有一个案例没通过即没考虑sum=0的情况。
	//该种情况下使用do while语句就不用单独分析了。
	
	/*
	do{
		s[i++]=sum % D;
		sum =sum / D;
	}while(sum != 0);
	*/
	
	for (; sum!=0; i++) {
		s[i] = sum % D;
		sum = sum / D;
	}
	i = i - 1;
	for (; i >= 0; i--) {
		printf("%d", s[i]);
	}
	
	return 0;
}

	

