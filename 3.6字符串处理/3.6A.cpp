#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main(){
	char a[200],b[100];
	while (scanf("%s %s", &a, &b) != EOF) {
		int i = 0;
		for (; a[i] != '\0'; i++){}
		int j = 0;
		for (; b[j] != '\0'; j++){}
		for (int m=0; m < j; m++) {
			a[i + m] = b[m];
		}
		for (int n = 0; n < i + j; n++) {
			printf("%c", a[n]);
		}
		printf("\n");
	}
    return 0;
}

	
