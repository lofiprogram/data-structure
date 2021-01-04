#include<cstdio>
#include<cmath>
int main() {
    double a, b, c, d, r1, r2;
    scanf_s("%lf%lf%lf", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    if (!a) {
        printf("Wrong parameter");
    }
    else if (d >= 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1=%.2f\nr2=%.2f", r1, r2);
    }
    else {
        printf("No real roots!");
    }
    return 0;
}
