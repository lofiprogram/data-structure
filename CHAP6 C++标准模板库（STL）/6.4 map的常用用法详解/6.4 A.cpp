#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<vector>
#include <algorithm>
#include<set>
#include<string>
#include<unordered_map>
using namespace std;

bool isnum(char c)
{
	if (c >= 'a' && c <= 'z')return true;
	if (c >= '0' && c <= '9')return true;
	return false;
}

int main() {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	}

	unordered_map<string, int>hash;

	string temp = "";
	for (int i = 0; i < s.size(); i++) {
		if (isnum(s[i])) {
			temp += s[i];
		}
		else {
			if (temp == "")continue;
			if (hash.find(temp) != hash.end())
				hash[temp]++;
			else
				hash[temp] = 1;
			temp = "";
		}
	}
	
	if (temp != "") {
		if (hash.find(temp) != hash.end())
			hash[temp]++;
		else
			hash[temp] = 1;
	}
	
	//处理最后一个单词
	//涉及题目中对单词的定义
	//最后一个字符不管是不是字母数字都要算作单词
	//不然最后一个测试点过不了
	//这个定义在题目倒数第二句话：
	//Here a word is defined as 
	//a continuous sequence of alphanumerical characters 
	//separated by non-alphanumerical characters or the line beginning/end.
	
	unordered_map<string, int>::iterator it;
	string a;
	int m = -1;
	for (it = hash.begin(); it != hash.end(); it++) {
		if (it->second > m) {
			m = it->second;
			a = it->first;
		}
	}
	cout << a << " " << m << endl;
	return 0;
}

	

