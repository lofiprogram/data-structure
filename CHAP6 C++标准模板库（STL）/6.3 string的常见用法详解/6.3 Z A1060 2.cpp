#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<vector>
#include <algorithm>
#include<set>
#include<string>
using namespace std;

int n;

string deal(string s,int& e) {
	int k = 0;

	while (s.length() > 0 && s[0] == '0') {
		s.erase(s.begin());
	}
	//该循环去除前导零

	if (s[0] == '.') {
		//去除前导0后第一位数为"."，说明s是小于1的数
		s.erase(s.begin());
		//去掉小数点
		while (s.length() > 0 && s[0] == '0') {
			s.erase(s.begin());
			//去掉小数点后非零位前所有的零
			//即0.00027的情况
			e--;
			//e记录指数，每去掉一个0，减1
		}
	}
	else {
		//去掉前导零后第一位不是小数点的情况
		while (k < s.length() && s[k] != '.') {
			k++;
			e++;
		}
		//统计小数点前一共多少位
		//e记录指数，每多一位，指数加1
		if (k < s.length()) {
			//说明该情况下有小数点
			s.erase(s.begin() + k);
			//删除小数点
		}
	}
	
	if (s.length() == 0) {
		e = 0;
	}
	//去除前导零后s的长度为0，该数即为0

	int num = 0;
	k = 0;
	string res;
	
	while (num < n) {
		if (k < s.length()){
		        res += s[k++];
		}else{ 
			res += '0';
		     }
		num++;
	}
	//精度小于n就进行循环
	//s内有数字则加数字
	//s内无数字则加0
	return res;
}

int main() {
	string s1, s2, s3, s4;
	cin >> n >> s1 >> s2;
	int e1 = 0, e2 = 0;
	s3 = deal(s1, e1);
	s4 = deal(s2, e2);
	if (s3 == s4 && e1 == e2) {
		cout << "YES 0." << s3 << "*10^" << e1 << endl;
	}
	else {
		cout << "NO 0." << s3 << "*10^" << e1 << " 0." << s4 << "*10^" << e2 << endl;
	}
	return 0;
}

	

