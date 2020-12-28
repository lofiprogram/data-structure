#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;

#include<iostream>
using namespace std;

char src[200] = { 0 };
int srci[200] = { 0 };
char res[200] = { 0 };


int devide(int len)
{
    int carry = 0;
    for (int i = 0; i < len; i++)
    {
        int num = (carry * 10 + srci[i]) / 2;
        carry = srci[i] % 2;
        srci[i] = num;
    }
    return carry;
}

//判断srci是否为0
bool isZero(int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        if (srci[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    while (cin >> src)
    {
        int len = 0, i = 0, j = 0;
        while (src[len] != '\0')
        {
            srci[len] = src[len] - '0';
            len++;
        }

        int resl = 0;
        do
        {
            res[resl++] = devide(len) + '0';
        } while (!isZero(len));

        for (i = resl - 1; i >= 0; i--)
        {
            cout << res[i];
        }
        cout << endl;
    }
    return 0;
}

	

