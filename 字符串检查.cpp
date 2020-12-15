#include<stdio.h>//检查SCU或xSCUx（x为全是A的字符串） 
#include<string.h>
#define STR 100

int main(){
	int i, n, nl, k, l, m;//n为组数，i为组数计数，nl1为字符串长度 
	char a[STR];
	
	
	scanf("%d", &n);
		for(i = 0; i <= n-1; i++){
			scanf("%s", a);		
			for(nl = 0; a[nl]!= '\0'; nl++);
			if(nl==3){
	        	if (a[0]=='S'&&a[1]=='C'&&a[2]=='U')
				printf("YES\n");
				else
				printf("NO\n"); 
				}
			else{
				for(k=0;k<100;k++)
				if(a[k]=='S'&&a[k+1]=='C'&&a[k+2]=='U') 
				break;
				for(l=k;a[l-1]=='A';l--);//若j=0，则证明S前面的字母都为A
				for(m=k+3;a[m]=='A';m++);//若n=l（字符串长度），则证明U后面的字母都为A
				{
				if(l==0&&m==nl)
				printf("YES\n");
				else 
				printf("NO\n");
			    }
			}
		}
	return 0;
}

