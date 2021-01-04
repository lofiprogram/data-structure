//1928ProblemA日期差值 
#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;

int monthDay[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},
        {31,31},{31,31},{30,30},{31,31},{30,30},{31,31}
        };
bool isLeap(int year)
{
    if((year%4==0&&year%100!=0) || year%400==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int time1,year1,month1,day1;
    int time2,year2,month2,day2;
    while(scanf("%d%d",&time1, &time2) != EOF)
    {
        if(time1>time2)
        {
            int temp=time1;
            time1=time2;
            time2=temp;
        }
        year1 = time1/10000;
        month1 = time1%10000/100;
        day1 = time1%100;
        
        year2 = time2/10000;
        month2 = time2%10000/100;
        day2 = time2%100;
        int count=0;//计数值 
        while(year1<year2 || month1<month2 || day1<day2)//较小的时间点累加追较大的时间点
        {
            day1++;
            if(day1 > monthDay[month1][isLeap(year1)])//天数满月加一
            {
                month1++;
                day1=1;     
            }           
            if(month1 > 12)//月数满年加一
            {
                year1++;
                month1=1;
            }
            count++;
        }
        count=count+1;//如果两个日期是连续的我们规定他们之间的天数为两天
        printf("%d\n",count);
    }
    return 0;
}

/*
https://www.jianshu.com/p/7dddbeed8a96
*/


