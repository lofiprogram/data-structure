#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<algorithm>
//#include "minmax.h"  //vc6.0 里 min()和max()包含在头文件"minmax.h"，PAT无需此句
using namespace std;

#define N 100001

int d[N]; //存储相邻两点距离
int i_1d[N]; //存储各点距离起点的距离，以减少遍历次数

int main() {
	//freopen("in.txt","r",stdin);
	int n;
	while (scanf("%d", &n) != EOF) {
		int total = 0; //存储所有边之后，以减少遍历次数
		for (int i = 1; i <= n; i++) { //只需遍历一次，随后通过数组i_1d[N]可求出任意两点距离（做差）
			scanf("%d", &d[i]);
			total += d[i];
			if (i == 1)
				i_1d[i] = 0;
			else
				i_1d[i] = i_1d[i - 1] + d[i - 1];
		}
		int m;
		scanf("%d", &m);
		while (m--) {
			int a, b;
			int mi, ma;
			int dist;
			scanf("%d %d", &a, &b);
			mi = min(a, b); //将序号小的点的序号赋值给mi
			ma = max(a, b); //将序号大的点的序号赋值给ma
			dist = i_1d[ma] - i_1d[mi]; //做差计算两点距离（路径中不包含起点）
			printf("%d\n", min(dist, total - dist)); //输出“劣弧”
		}
	}

	return 0;
}


/*
代码来源
https://blog.csdn.net/ZJFCLH/article/details/21394183?utm_medium=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-2.control&depth_1-utm_source=distribute.pc_relevant.none-task-blog-BlogCommendFromMachineLearnPai2-2.control
*/
