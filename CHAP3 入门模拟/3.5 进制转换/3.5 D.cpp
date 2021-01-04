#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main(){
	int n;
	while (scanf("%d", &n) != EOF) {
		int a[10] = {};
		int i = 0;
		do {
			a[i++] = n % 8;
			n = n / 8;
		} while (n != 0);
		i = i - 1;
		for (; i >= 0; i--) {
			printf("%d", a[i]);
		}
		printf("\n");
	}
    return 0;
}

	

