#include <stdio.h>	

int main(){
	int n = 0;//外层计数循环
	scanf("%d", &n);
	getchar();
	
	for(int N=0; N<n; N++){
		char a[1001] = {'0'};
		char odd[1001] = {'0'};
		char even[1001] = {'0'};		
		fgets(a, 1000, stdin);
		int q1 = 0;
		int q2 = 0;//q1代表偶数数组计数，q2代表奇数数组计数

		for(int i=0; i<1000; i=i+2){
			if(a[i] != '\0'){
				if((a[i]-48)%2 == 0){
					even[q1] = a[i];
					q1++;
				}
				else{
					odd[q2] = a[i];
					q2++;
				}
			} 
			else{
				break;
			}	
		}//此循环正确，下面设置一排序循环 
	
		int num = 0;//num即为数字个数，num-1也即是需要进行排序的次数（排序方法：从左至右依次检测，检测n位需n-1次）
		char temp; 
		for(; num<1000; num++){
			if(odd[num] == '\0' || odd[num] == '0')//终止符是什么？？？？ 
				break;
		}
		num--;
		for(int N=0; N<num; N++){
			if(odd[N] >= odd[N+1]){
				temp = odd[N+1];
				odd[N+1] = odd[N];
				odd[N] = temp;
			}
		}
		for(int i=0; i<num+1; i++){
			printf("%d ", (odd[i]-48));
		}
		
		num = 0;
		for(; num<1000; num++){
			if(even[num] == '\0' || even[num] == '0')//终止符是什么？？？？ 
				break;
		}
		num--;
		for(int N=0; N<num; N++){
			if(even[N] >= even[N+1]){
				temp = even[N+1];
				even[N+1] = even[N];
				even[N] = temp;
			}
		}
		for(int i=0; i<num+1; i++){
			if(i==num){
				printf("%d\n", (even[i]-48));
			} 
			else{
				printf("%d ", (even[i]-48));
			}
		}	
	}	
	return 0; 
}
