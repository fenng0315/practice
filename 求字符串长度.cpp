#include<stdio.h>

int main(){
	char a[1000];
	int n = 0;
	gets(a);
	while(a[n]!='\0'){
		n++;
	}
	printf("%d", n);
	return 0;
} 
