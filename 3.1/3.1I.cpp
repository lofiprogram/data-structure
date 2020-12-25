#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int w1 = 0, draw1 = 0, lose1 = 0;
		int w2 = 0, draw2 = 0, lose2 = 0;
		int c1 = 0, j1 = 0, b1 = 0;
		int c2 = 0, j2 = 0, b2 = 0;
		for (int i = 0; i < n; i++) {
			char a, b;
			getchar();
			scanf("%c", &a);
			getchar();
			scanf("%c", &b);

			if (a == 'C' && b == 'J') {
				w1++;
				c1++;
			}

			if (a == 'J' && b == 'C') {
				w2++;
				c2++;
			}

			if (a == 'J' && b == 'B') {
				w1++;
				j1++;
			}

			if (a == 'B' && b == 'J') {
				w2++;
				j2++;
			}

			if (a == 'B' && b == 'C') {
				w1++;
				b1++;
			}

			if (a == 'C' && b == 'B') {
				w2++;
				b2++;
			}
		}
		draw1 = draw2 = n - w1 - w2;
		lose1 = w2; lose2 = w1;
		printf("%d %d %d\n", w1, draw1, lose1);
		printf("%d %d %d\n", w2, draw2, lose2);
		char c, d;

		if (b1 >= c1 && b1 >= j1)
			c = 'B';
		else if (c1 > b1 && c1 >= j1)
			c = 'C';
		else
			c = 'J';

		if (b2 >= c2 && b2 >= j2)
			d = 'B';
		else if (c2 > b2 && c2 >= j2)
			d = 'C';
		else
			d = 'J';

		printf("%c %c\n", c, d);
	}
	return 0;
}

