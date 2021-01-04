#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

struct student {
    int id;
    char name[10];
    double cou1;
    double cou2;
    double cou3;
}str[20];

void input(struct student str[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d %s %lf %lf %lf", &str[i].id, str[i].name, &str[i].cou1, &str[i].cou2, &str[i].cou3);
    }
}

int main() {
    input(str);

    double sum1 = 0, sum2 = 0, sum3 = 0, ave1, ave2, ave3;
    for (int i = 0; i < 10; i++) {
        sum1 += str[i].cou1;
        sum2 += str[i].cou2;
        sum3 += str[i].cou3;
    }
    ave1 = sum1 / 10;
    ave2 = sum2 / 10;
    ave3 = sum3 / 10;

    double a[10] = {};
    for (int i = 0; i < 10; i++) {
        a[i] = (str[i].cou1 + str[i].cou2 + str[i].cou3) / 3;
    }
    double t = a[0];
    int b = 0;
    for (int i = 1; i < 10; i++) {
        if (a[i] > t) {
            t = a[i];
            b = i;
        }
    }

    printf("%.2f %.2f %.2f \n", ave1, ave2, ave3);
    printf("%d %s %.0f %.0f %.0f", str[b].id, str[b].name, str[b].cou1, str[b].cou2, str[b].cou3);
    return 0;
}


