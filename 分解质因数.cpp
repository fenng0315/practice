#include<stdio.h>//P.S.用了goto语句不是很好，且做此题耗时太长 

int main(){
	int n = 0;//大循环
	int num = 0;//待检测的数字
	int prime = 2;//遍历的质数
	
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
				}//退出此for循环后即得到质数prime
				 
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
						prime = 1; //重置prime重新从2开始遍历 
					}
				}
		}
	} 
	return 0;
}
