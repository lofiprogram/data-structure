#include<cstdio>
#include<string.h>
#include<algorithm>
#include<queue>
#include<map>
#include<string>
#include<iostream>
using namespace std;
struct task{
	string TaskName;
	int yxj;//优先级,这里规定小的数为高优先级
	task(){
		TaskName.clear();
		yxj = 0;
	}
};
struct cmp{
	bool operator () (task a, task b){
		if(a.yxj!=b.yxj) return a.yxj>b.yxj;//如果优先级不相等,则小的优先级大 
		else return a.TaskName>b.TaskName;//如果优先级相等,则字母序小的优先级大 
	}
};
map<string, int> m;
priority_queue<task, vector<task>, cmp> q;
int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			string temp, temptask;
			cin>>temp;
			int left = temp.find("(");
			int right = temp.find(")");
			if(i==0) m[temp.substr(0, left)] = 0;
			for(int i=left+1;i<=right;i++){
				if(temp[i]==','||i==right){
					if(temptask=="NULL") break;
					m[temptask] = m[temp.substr(0, left)]+1;//优先级比前一级低一级 
					temptask.clear();
					continue;
				}
				temptask += temp[i];
			}
		}
		for(map<string, int>::iterator it=m.begin();it!=m.end();it++){
			task tmp;
			tmp.TaskName = it->first;
			tmp.yxj = it->second;
			q.push(tmp);
		}
		for(int i=0;i<n;i++){
			if(i==0){
				cout<<q.top().TaskName;
				q.pop();
			}
			else{
				cout<<" "<<q.top().TaskName;
				q.pop();	
			}
		}
		cout<<endl;
		m.clear();//清空map,注意队列没有clear函数,而且不需要手动清空,pop的时候已经清空了 
	}
	return 0;
}


