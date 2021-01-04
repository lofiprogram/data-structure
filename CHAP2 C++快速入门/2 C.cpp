#include<cstdio>
int main() {
    int n, i;
    int z[70] = { 1,1 };
    scanf_s("%d", &n);
    if (n > 50) {
        printf("the n need to below 50");
    }
    else {
        for (i = 2; i < n; i++) {
            if (i >=50)break;
            z[i] = z[i - 1] + z[i - 2];
            //printf("%d\n", z[i]);
        }
        printf("%d\n", z[i-1]);
    }
    return 0;
}
