#include<stdio.h>//P.S.����goto��䲻�Ǻܺã����������ʱ̫�� 

int main(){
	int n = 0;//��ѭ��
	int num = 0;//����������
	int prime = 2;//����������
	
	scanf("%d", &n);
	
	for(int N=0; N<n; N++){
		scanf("%d", &num);
		
		MARK:for(; prime<10000&&num!=1; prime++){
			    int tmp = prime - 1;
    			for(int i=2; i<=tmp; i++){
    				if(prime%i==0){
    					prime++;
    					goto MARK;
					}
				}//�˳���forѭ���󼴵õ�����prime
				 
				if(num%prime==0){
					if(num/prime==1){
						printf("%d", prime);
						printf("\n");
						num = num/prime;
						prime = 1;
					} 
					else{
						printf("%d", prime);
						printf("*");
						num = num/prime;				
						prime = 1; //����prime���´�2��ʼ���� 
					}
				}
		}
	} 
	return 0;
}
