#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;

int md[13][2] = { {0,0},
	{31,31},{28,29},{31,31},{30,30},{31,31},{30,30} ,
	{31,31},{31,31},{30,30},{31,31},{30,30},{31,31} };

bool isleap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	}
	return false;
}

int main() {
	int t1, t2;
	int y1, m1, d1, y2, m2, d2;
	while (scanf("%d%d", &t1, &t2) != EOF) {
		if (t1 > t2) {
			int temp = t1;
			t1 = t2;
			t2 = temp;
		}

		y1 = t1 / 10000;
		m1 = t1 % 10000 / 100;
		d1 = t1 % 100;

		y2 = t2 / 10000;
		m2 = t2 % 10000 / 100;
		d2 = t2 % 100;

		int i = 0;
		while (y1 < y2 || m1 < m1 || d1 < d2) {
			d1++;
			if (d1 > md[m1][isleap(y1)]) {
				m1++;
				d1 = 1;
			}
			if (m1 > 12) {
				y1++;
				m1 = 1;
			}
			i++;
		}
		i = i + 1;
		printf("%d\n", i);
	}
	return 0;
}

	

