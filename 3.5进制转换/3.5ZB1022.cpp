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

	

