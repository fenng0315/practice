//任何大于6的偶数都可以分解成两个奇质数的和。输入n，输出所有解，按小的在前，大的在后输出，不要重复。 

#include<stdio.h>

int main(){
	int n = 0;//输入待检测的整数n
	int i = 2;//检测用数字 
	scanf("%d", &n);
	if(n <= 6){
		printf("ERROR");
	} 
	else if(n%2 != 0){
		printf("ERROR");
	}
	else{
		int n1 = 3;//第一个尝试数字
		int n2 = 0;//第二个被动尝试数字 
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



    
    
	 
    
