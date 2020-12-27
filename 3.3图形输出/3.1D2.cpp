
#include <stdio.h>
int main()
{
	int h;
	while(scanf("%d",&h) != EOF)
	{
		for(int i=0;i<h;i++)//上半部分的倒三角
		{
			for(int j=0;j<i;j++)
			{
				printf(" ");
			}
			for(int j=0;j<h-i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for(int i=1;i<h;i++)//下半部分正三角
		{
			for(int j=0;j<h-1-i;j++)
			{
				printf(" ");
			}
			for(int j=0;j<i+1;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}
