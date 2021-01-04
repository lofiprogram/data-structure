#include<cstdio>
int main() {
    volatile int i;
    volatile double sum = 0,t;
    volatile int a[25] = { 1,2 };
    for (i = 1; i <= 20; i++) {
        a[i + 1] = a[i] + a[(i - 1)];
        t = double(a[i]) / double(a[i - 1]);
        sum += t;
    }
    printf("%.6f", sum);
    return 0;
}
