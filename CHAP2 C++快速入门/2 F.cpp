#include<cstdio>
int main() {
    char str1[10];
    scanf_s("%s", str1);
    for (int i = 0; i<10; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            str1[i] = 155 - str1[i];
        }else if(str1[i] >= 'a' && str1[i] <= 'z'){
            str1[i] = 219-str1[i];
        }
    }
    printf("%s", str1);
    return 0;
 }



#include<stdio.h>
#include<cstring>
#define N 100
void main()
{
    char a[N], b[N];
    int n, i = 0;
    gets_s(a);
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            b[i] = 155 - a[i];
        else
            if (a[i] >= 'a' && a[i] <= 'z')
                b[i] = 219 - a[i];
            else
                b[i] = a[i];
        i++;
    }
    n = i;
    for (i = 0; i < n; i++)
        printf("%c", b[i]);
    printf("\n");
}
