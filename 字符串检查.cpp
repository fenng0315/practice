#include<stdio.h>//���SCU��xSCUx��xΪȫ��A���ַ����� 
#include<string.h>
#define STR 100

int main(){
	int i, n, nl, k, l, m;//nΪ������iΪ����������nl1Ϊ�ַ������� 
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
				for(l=k;a[l-1]=='A';l--);//��j=0����֤��Sǰ�����ĸ��ΪA
				for(m=k+3;a[m]=='A';m++);//��n=l���ַ������ȣ�����֤��U�������ĸ��ΪA
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

