#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
#include<iostream>
using namespace std;


int main(){

	    char a[100];
		gets_s(a);
		int len1 = strlen(a);
		for (int i = 0; i < len1; i++) {
			if (a[i] >= 'A' && a[i] <= 'Z') {
				a[i] += 32;
			}
		}

		char b1[1000];
		while (gets_s(b1)) {
			int len2 = strlen(b1);
			char b2[1000];
			strcpy(b2, b1);
			for (int i = 0; i < len2; i++) {
				if (b2[i] >= 'A' && b2[i] <= 'Z') {
					b2[i] += 32;
				}
			}

			int F = 0, Find[10] = {};
			for (int i = 0; i < len2; i++) {
				int k = 0;
				for (int j = 0; j < len1; j++) {
					if (b2[i + j] == a[j]) {
						k++;
					}
				}
				if (k == len1) {
					Find[F] = i;
					F++;
				}
			}

			//for (int i = 0; i < F; i++)
				//printf("%d ", Find[i]);

			for (int i = 0; i < F; i++) {
				int m = Find[i]-(len1*i);
				int n = len2 - (len1 * i);
				for (int j = m; j < n; j++) {
					b1[j] = b1[j + len1];
				}
			}

			for (int i = 0; i < len2; i++) {
				if (b1[i] == ' ') {
					continue;
				}
				printf("%c", b1[i]);
			}
			printf("\n");


		}
    return 0;
}

	

