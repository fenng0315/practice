#include <stdio.h>	

int main(){
	int n = 0;//������ѭ��
	scanf("%d", &n);
	getchar();
	
	for(int N=0; N<n; N++){
		char a[1001] = {'0'};
		char odd[1001] = {'0'};
		char even[1001] = {'0'};		
		fgets(a, 1000, stdin);
		int q1 = 0;
		int q2 = 0;//q1����ż�����������q2���������������

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
		}//��ѭ����ȷ����������һ����ѭ�� 
	
		int num = 0;//num��Ϊ���ָ�����num-1Ҳ������Ҫ��������Ĵ��������򷽷��������������μ�⣬���nλ��n-1�Σ�
		char temp; 
		for(; num<1000; num++){
			if(odd[num] == '\0' || odd[num] == '0')//��ֹ����ʲô�������� 
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
			if(even[num] == '\0' || even[num] == '0')//��ֹ����ʲô�������� 
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
