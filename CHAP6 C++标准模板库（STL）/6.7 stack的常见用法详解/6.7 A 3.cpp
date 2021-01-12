#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
 
void calculate(string str)
{
	double n=0.0;
	double num[200],st[200];
	char ch[200],st_ch[200];
	int step_n=0,step_c=0;
	char save = '0';
 
	for (int i=0; i < str.size(); i++)//把数字和运算符统一拆出来，分别存入num,ch数组
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			n = n * 10 + str[i] - '0';
		}
		else if (str[i] != ' ')
		{
			num[step_n++] = n;
			n = 0.0;
			ch[step_c++] = str[i];
			i++;
		}
	}
	num[step_n] = n;//最后一个数字存入数组中
	st[0] = num[0];
	step_n = 0;
	for (int i = 0; i < step_c; i++)
	{
		if (ch[i] == '+' || ch[i] == '-')
		{
			st_ch[step_n++] = ch[i];
			st[step_n] = num[i+1];
		}
		else
		{
			if (ch[i] == '*')
				st[step_n] *= num[i + 1];
			else
				st[step_n] /= num[i + 1];
		}
	}
	n = st[0];
	for (int i = 0; i < step_n; i++)//step_n为st数组中数字的个数
	{
		if (st_ch[i] == '+')
			n += st[i + 1];
		else
			n -= st[i + 1];
	}
	printf("%.2f\n", n);
}
 while(getline(cin,str),str!="0")
int main()
{
	string str;
	while (getline(cin, str), str!= "0")
	{
		calculate(str);
	}
	return 0;
}


/*
https://blog.csdn.net/weixin_31789689/article/details/104750113
*/
