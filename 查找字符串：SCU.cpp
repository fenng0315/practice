#include<stdio.h>
#include<string.h>
//�ַ������ڡ�SCU���������硰xSCUx�����ַ���,����x�ǽ�����ĸA��ɵ��ַ���
 
int main(){
	char a[101] = {'0'};
	int n = 0;
	int length = 0;
	int j, k, N = 0;
	 
	scanf("%d", &n);
	getchar();
	
	for(int i=0; i<n; i++){
		gets(a);
		length = strlen(a);
		
		if(length==3){
			if(a[0]=='S'&&a[1]=='C'&&a[2]=='U')
			printf("YES\n");
			else
			printf("NO\n");
		}
		else{
			for(N=0; N<length; N++){
				if(a[N]=='S'&&a[N+1]=='C'&&a[N+2]=='U'){
					break;
				}
			}//����SCU�ַ���N==length								
			for(j=0; j<N; j++){
				if(a[j]!='A'){
					break;
				}
			}
			for(k=length-1; k>N+2; k--){
				if(a[k]!='A'){
					break;
				}
			}
			if(j==N&&k==N+2){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}													 	
	}
	
	return 0;
} 
