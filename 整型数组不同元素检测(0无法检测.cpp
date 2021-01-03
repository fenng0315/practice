#include<stdio.h>

int main(){
	int a[999] = {0};//需要检测的原数组 
	int b[999] = {0};//用于存储非重复数字的比较数组 
	int n = 0;//输入的位数 
	int num = 0;//计数数字（不同元素个数） 
		
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
