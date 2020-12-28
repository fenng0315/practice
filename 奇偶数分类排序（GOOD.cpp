#include <stdio.h>	

int main(){
	int n = 0;//外层计数循环
	scanf("%d", &n);
	getchar();
	
	for(int N=0; N<n; N++){
		int a[1001] = {0};
		int odd[1001] = {0};
		int even[1001] = {0};
		int weishu = 1;//a数组中的数字数量		
		int q1 = 0;
		int q2 = 0;//q1代表偶数数组计数，q2代表奇数数组计数
		int q = 1;//q仅用于下述输入a的循环
		 
		for(scanf("%d", &a[q-1]); getchar()!='\n'; q++){//判断getchar()!='\n'是否为换行。
			scanf("%d", &a[q]);
			weishu++;
		}

		for(int i=0; i<weishu; i++){
			if(a[i]%2 == 0){
				even[q1] = a[i];
				q1++;
			}
			else{
				odd[q2] = a[i];
				q2++;
			}		
		}
	
		int temp = 0; 
		
		for(int NN=0; NN<q2-1; NN++){
			for(int N=0; N<q2-1; N++){//q即为数字个数，q-1也即是需要进行排序的次数（排序方法：从左至右依次检测，检测n位需n-1次
				if(odd[N] >= odd[N+1]){
					temp = odd[N+1];
					odd[N+1] = odd[N];
					odd[N] = temp;
				}
			}
		}
		for(int i=0; i<q2; i++){
			if(q1 == 0 && i == (q2-1)){
				printf("%d\n", odd[i]);
			} 
			else{
				printf("%d ", odd[i]);
			}		 
		}
		
		for(int NN=0; NN<q1-1; NN++){//偶数排序
			for(int N=0; N<q1-1; N++){ 
				if(even[N] >= even[N+1]){
					temp = even[N+1];
					even[N+1] = even[N];
					even[N] = temp;
				}
			}
		} 	
		for(int i=0; i<q1; i++){
			if(i==(q1-1)){
				printf("%d\n", even[i]);
			} 
			else{
				printf("%d ", even[i]);
			}
		}	
	}	
	return 0; 
}
