#include <stdio.h>//copy版本 
#include <string.h>
#include <stdlib.h>
//读入n名学生的姓名、身份证号、成绩，分别输出成绩最高和成绩最低学生的姓名和身份证号。
//注意：学生名单中可能缺考，没有成绩，表示为n/a. 
//对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，项与项之间有1个空格。如果成绩最高的学生有多个，输出姓名字典序最小的那个，如果成绩最低的有多个，输出姓名字典序最大的那个。
int main()
{
	struct student
	{
		char name[11];
		char id[19];
		char s[4];//因可能没有成绩，先用char数组存储成绩 
		int score;
	}stu[100];
	int n,i;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%s",stu[i].name);
		scanf("%s",stu[i].id);
		scanf("%s",stu[i].s);
	}
	for(i=0;i<n;i++)
	{
		stu[i].score=0;
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(stu[i].s,"n/a")==0)
		{
			stu[i].score=-1;
		}
		else
		{
			for(int j=0;j<strlen(stu[i].s);j++)
			    stu[i].score=stu[i].score*10+stu[i].s[j]-'0';//惯用法！ 
		}
	}
	int max,min;
	for(i=0;i<n;i++)
	{
		if(stu[i].score!=-1)
		{
			max=stu[i].score;
			min=stu[i].score;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(stu[i].score!=-1)
		{
		    if(stu[i].score>max)
	    	{
	    		max=stu[i].score;
	    	}
	    	if(stu[i].score<min)
	    	{
	    		min=stu[i].score;
	    	}
	    }
	}
	int high[100],low[100];
	int j=0,k=0;
	for(i=0;i<n;i++)
	{
		if(max==stu[i].score)
		{
			high[j]=i;
			j++;
		}
		if(min==stu[i].score)
		{
			low[k]=i;
			k++;
		}
	}
	int mark1=high[0],mark2=low[0];
	for(i=0;i<j;i++)
	{
		if(strcmp(stu[high[i]].name,stu[mark1].name)<0) mark1=high[i];
	}
	for(i=0;i<k;i++)
	{
		if(strcmp(stu[low[i]].name,stu[mark2].name)>0) mark2=low[i];
	}
	printf("%s %s\n",stu[mark1].name,stu[mark1].id);
	printf("%s %s",stu[mark2].name,stu[mark2].id);
	return 0;
}
