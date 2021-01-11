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

/*

思路

这题很显然是一个优先队列
为了方便计算
构建了一个结构体
里面包含任务的名字和优先级
并且令数值小的优先级大
初始化优先级为0
这样每次计算后序任务的时候
只要后续任务的优先级加1即可

先建立一个string映射到int的map
读入并处理题目的所有信息
在这里要注意
计算后序任务的优先级时
不能简单的m[taskname]++
以样例来说，如果简单自加的话
task3是从未出现过的元素
那么task3的优先级也将是1
和task1、task2一样了

因为有前序任务和后序任务的优先级是有联系的
因此我们后序任务优先级的计算
应该是在前序任务的优先级的基础上，再加1
这样就完成了前后序关系的构建

最后，只要用迭代器遍历整个map
分别把key和value的值存进结构体，
再把当前结构体入队即可
map的所有信息处理完之后
此时的队列就是我们想要的结果了
于是，直接遍历队列输出即可

另外，队列的优先级判断结构体cmp
不能简单地只写优先级数值大小的关系，
因为题目说要输出字典序最小的一种，
因此，当优先级相等的时候，
还应该把字典序小的设为高优先级

做完这题大题上的感觉和map的那道练习题差不多，
但是因为map是自动按key的值从小到大排序的，
而这里key又是一个字符串，
本题我们想要的是value的值从小到大排序，
因此其实可以用unordered_map，
然后再把这个map里的每个key和value作为一对（pair），
放进vector里面，
最后只要写一个sort函数对vector排序即可，
这样也能实现本题的要求，
不过要是能记住优先队列排序规则的写法的话（用结构体或者友元函数），
还是优先队列比较方便

https://blog.csdn.net/weixin_42257812/article/details/105329288?utm_medium=distribute.pc_relevant.none-task-blog-baidujs_title-3&spm=1001.2101.3001.4242

*/


