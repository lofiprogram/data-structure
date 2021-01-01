/*
https://github.com/maximusyoung007/codeup/blob/master/3.6%E5%AD%97%E7%AC%A6%E4%B8%B2%E5%A4%84%E7%90%86/1808.cpp
*/

#include<cstdio>
#include<cstring>
int compare(char s1[],char s[],int i){
    int j;
    for (j = 0; j < strlen(s1); j++) {
        if (s1[j] >= 'A'&&s1[j] <= 'Z') s1[j] = s1[j] + 32;   //不区分大小写，先把大写转换为小写
        if (!(s[i + j] == s1[j] || s[i + j] == s1[j] - 32)) {  //相等或者等于相应的大写字母，不相等则返回零
            return 0;
        }
    }
    for (j = 0; j < strlen(s1); j++) {  //如果存在相同的部分，赋值为'?'
        s[i + j] = '?';
    }
    return 1;
}
int main() {
    char s1[100];
    char s[10010];
    scanf("%s", s1);
    getchar();
    while (gets(s)) {
        int i = 0;
        while(s[i]!='\0'){
            if (compare(s1, s, i)) i += strlen(s1);  //如果存在，跳strlen（s1）
            else i++;  //不存在，跳1
        }
        for (i = 0; s[i] != '\0'; i++) {
            if (s[i] != '?'&&s[i] != ' ') putchar(s[i]);
        }
        printf("\n");
    }
}
