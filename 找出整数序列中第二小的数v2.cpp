#include<stdio.h>//��һ��������������ֵ�λ�� 

int main(){
	int n = 0;
	int a[999] = {0};
	int length = 0;
	int temp = 0;
	int num = 0;//�ж��Ƿ���ڵڶ�С�����ļƴ�����
	
	scanf("%d", &n); 
 	getchar();
	for(int i=0; i<n; i++){
		int TEMP = 0;
		scanf("%d ", &length);
		do{
			scanf("%d", &a[TEMP]);
			TEMP++; 
		}while(TEMP<length);
		
		for(int II=0; II<length; II++){
			for(int I=0; I<length-1; I++){
				if(a[I]>a[I+1]){
					temp=a[I];
					a[I]=a[I+1];
					a[I+1]=temp;
				}			
			}
		}//��a�����ź��� 
		
		temp = a[0];
		 
		for(int p=0; p<length; p++){
			if(a[p]>temp){
				temp = a[p];
				num++;
				break; 
			}
		}
		
		if(num>0){
			printf("%d\n", temp);
		}
		else{
			printf("ERROR\n");
		}
		
		num = 0;	
	}
	
	return 0;
}
