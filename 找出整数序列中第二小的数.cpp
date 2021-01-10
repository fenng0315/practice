#include<stdio.h>

int main(){
	int n = 0;
	int a[999] = {0};
	int length = 0;
	int temp = 0;
	int num = 0;//判断是否存在第二小的数的计次数字
	
	scanf("%d", &n); 
 	getchar();
	for(int i=0; i<n; i++){
		char TEMP = '0';
		do{
			scanf("%d", &a[length]);
			TEMP = getchar();
			length++;
		}while(TEMP!='\n');
		
		for(int II=0; II<length; II++){
			for(int I=0; I<length-1; I++){
				if(a[I]>a[I+1]){
					temp=a[I];
					a[I]=a[I+1];
					a[I+1]=temp;
				}			
			}
		}//给a数组排好序 
		
		for(int p=0; p<length; p++){
			if(a[1]<a[p]){
				num++; 
			}
		}
		
		if(num>0){
			printf("%d\n", a[1]);
		}
		else{
			printf("ERROR\n");
		}
		
		num = 0;
		length = 0;		
	}
	
	return 0;
}
