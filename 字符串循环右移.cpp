#include<stdio.h>

int main(){
	int M, M1 = 0;
	char str[201];
	int count = 0;	//计数器变量
    int count1 = 0; 
    
    scanf("%d", &M);
    getchar();
	fgets(str, 201, stdin);
	M1 = M;
	while (str[count] != '\0'){
		count++;
	}
	
	
	while(M>=1){
		printf("%c", str[count-1-M]);
		M--;
	}
	while(count1<count-1-M1){
		printf("%c", str[count1]);
		count1++;
	}

	return 0;
} 
