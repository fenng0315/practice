//�κδ���6��ż�������Էֽ�������������ĺ͡�����n��������н⣬��С����ǰ������ں��������Ҫ�ظ��� 

#include<stdio.h>

int main(){
	int n = 0;//�������������n
	int i = 2;//��������� 
	scanf("%d", &n);
	if(n <= 6){
		printf("ERROR");
	} 
	else if(n%2 != 0){
		printf("ERROR");
	}
	else{
		int n1 = 3;//��һ����������
		int n2 = 0;//�ڶ��������������� 
    	MARK:while(1){
    		for(; i < n1; i++){
       	 		if (n1 % i == 0) {
					n1++;
         	    	i = 2;
        		}
    		}
    		n2 = n - n1;
    		i = 2;
    		for(; i < n2; i++){
        		if (n2 % i == 0) {
        			n1++;
        			i = 2; 
            		goto MARK;
        		}
   	 		}
    		if(n1 <= n2){
    			printf("%d %d\n", n1, n2);
    			n1++;
    			i = 2;
			}
			else if(n1 > n2){
				break;		
			}			
		}
	}
	return 0;
} 



    
    
	 
    
