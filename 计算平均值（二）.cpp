#include <stdio.h>
#include <string.h>
//输入N个整数，计算它们的平均值，保留小数点后两位。n>=1&&n<=100
//注意：输入可能是无效整数，表示为n/a。在计算平均值时，先排除掉无效整数。如果输入全为n/a，则输出n/a 

int main()
{
	int n,i;
	scanf("%d",&n);
	char a[100][30];

   	for(i=0;i<n;i++)
    {
    	scanf("%s",a[i]);
   	}
   	int count=n;
   	for(i=0;i<n;i++)
   	{
	   	if(strcmp(a[i],"n/a")==0) count--;
   	}
   	if(count==0)
   	{
   		printf("n/a");
	}
	else
	{
		int b[100]={0};
	   	for(i=0;i<n;i++)
		{
	        if(strcmp(a[i],"n/a")==0)
			{
				continue;
			} 
	       	else if(a[i][0]=='-')
	       	{
	       		for(int j=1;j<strlen(a[i]);j++)
	       		    b[i]=b[i]*10+a[i][j]-'0';
	       		b[i]=-b[i];
	       	}
	       	else
	       	{
	       		for(int j=0;j<strlen(a[i]);j++)
	       		    b[i]=b[i]*10+a[i][j]-'0';
	       	}
    	}
       	double sum=0;
       	for(i=0;i<n;i++)
       	{
    	   	sum=sum+b[i];
       	}
        printf("%.2f",sum/count);
	}
	return 0; 
}
