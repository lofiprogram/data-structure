//1
#include<cstdio>
#include<cstring>
using namespace std;

void less(char *x, char *y) {
	int m = strcmp(x, y);
	char temp[20] = {};
	if (m > 0) {
		strcpy_s(temp,20,x);
		strcpy_s(x, 20, y);
		strcpy_s(y,20, temp);
	}
}

int main() {
	char a[20], b[20], c[20];
	gets_s(a); gets_s(b); gets_s(c);
	less(a, b); less(a, c); less(b, c);
	puts(a); puts(b);puts(c); 
	return 0;
}


//2
#include<cstdio>
#include<cstring>

void less(char** a, char** b) {
    char* temp;
    int m = strcmp(*a, *b);
    if (m > 0) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    char a[20], b[20], c[20];
    scanf_s("%s", a, 20);
    scanf_s("%s", b, 20);
    scanf_s("%s", c, 20);
    char* p1 = a, * p2 = b, * p3 = c;
    less(&p1, &p2);
    less(&p1, &p3);
    less(&p2, &p3);
    printf("%s\n", p1);
    printf("%s\n", p2);
    printf("%s\n", p3);
    return 0;
}


//3
/*
int min(int x[]) {
    int temp,mini=x[0];
        for (int i = 1; i < 10; i++) {
            if (x[i]<mini) {
                mini = x[i];
                temp = i;
            }
    }
        return temp;
}

int max(int x[]) {
    int temp, maxi = x[0];
    for (int i = 1; i < 10; i++) {
        if (x[i] > maxi) {
            maxi = x[i];
            temp = i;
        }
    }
    return temp;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void input(int* x) {
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", (x+i));
    }
}

void output(int* x) {
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(x+i));
    }
}
int main() {
    int a[10];
    input(a);
    int min1 = min(a);
    int max1 = max(a);
    swap(&a[0], &a[min1]);
    swap(&a[9], &a[max1]);
    output(a);
    return 0;
}
*/

