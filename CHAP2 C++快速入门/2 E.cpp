#include<cstdio>
int main() {
    int n, a[10][10];
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++){
        a[i][0] = 1;
            a[i][i] = 1;
    }

    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }
    }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }

        return 0;
    }
