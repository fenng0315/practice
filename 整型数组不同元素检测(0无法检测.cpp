#include<stdio.h>

int main(){
	int a[999] = {0};//��Ҫ����ԭ���� 
	int b[999] = {0};//���ڴ洢���ظ����ֵıȽ����� 
	int n = 0;//�����λ�� 
	int num = 0;//�������֣���ͬԪ�ظ����� 
		
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf(" %d", &a[i]);
	}
	
	for(int i=0; i<n; i++){
		if(i==0){
			b[i] = a[i];
			num++; 
		}
		else{
			for(int N=0; N<n; N++){
				if(a[i]==b[N]){
					break;
				}
				if(a[i]!=b[N]&&N==n-1){
					num++;
					b[i] = a[i];
				}
			}
		}
	} 
	printf("%d\n", num);
	
	return 0;
} 
