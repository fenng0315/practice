#include<stdio.h>//每个输入包含一个测试用例，第1行输入N ( 1<=N<=100)；第2行输入N个整数，之间用空格分隔。

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
