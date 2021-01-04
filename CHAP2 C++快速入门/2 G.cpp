#include<cstdio>
#include<cstring>
void vowels(char s[], char b[]) {
        for (int i = 0,k = 0; s[i] != '\0'; i++) {
                if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||s[i] == 'u' || s[i] == 'U') {
                    b[k] = s[i];
                    k++;
                }
            b[k] = '\0';
        }
    }
int main() {
    char s[100],b[100];
    gets_s(s);
    vowels(s, b);
    puts(b);
    return 0;
}
