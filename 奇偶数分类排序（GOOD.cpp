#include <stdio.h>	

int main(){
	int n = 0;//������ѭ��
	scanf("%d", &n);
	getchar();
	
	for(int N=0; N<n; N++){
		int a[1001] = {0};
		int odd[1001] = {0};
		int even[1001] = {0};
		int weishu = 1;//a�����е���������		
		int q1 = 0;
		int q2 = 0;//q1����ż�����������q2���������������
		int q = 1;//q��������������a��ѭ��
		 
		for(scanf("%d", &a[q-1]); getchar()!='\n'; q++){//�ж�getchar()!='\n'�Ƿ�Ϊ���С�
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
			for(int N=0; N<q2-1; N++){//q��Ϊ���ָ�����q-1Ҳ������Ҫ��������Ĵ��������򷽷��������������μ�⣬���nλ��n-1��
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
		
		for(int NN=0; NN<q1-1; NN++){//ż������
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
