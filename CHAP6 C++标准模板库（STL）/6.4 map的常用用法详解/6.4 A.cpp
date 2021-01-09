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

	

