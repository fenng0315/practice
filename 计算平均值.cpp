#include<stdio.h>//ÿ���������һ��������������1������N ( 1<=N<=100)����2������N��������֮���ÿո�ָ���

int main(){
	int a[101];
	int n = 0;
	float temp = 0;
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		temp = temp + a[i];
	}
	printf("%.2f", temp/n);
	
	return 0;
}
