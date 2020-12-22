#include<stdio.h>//可检测100~999之间的水仙花数 

int tri(int a){
	return a*a*a;
}

int main(){
	int n = 0;
	int min, max = 0;
	int m1, m2, m3 = 0;//所检测数的个位，十位，百位 
	int num = 0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &min, &max);
		for(int I=0; (I+min)<=max; I++){
			m1 = (I+min)%10;
			m2 = ((I+min)%100 - (I+min)%10)/10;
			m3 = (I+min)/100;
			if((I+min) == tri(m1)+tri(m2)+tri(m3)){
				num = (I+min);
				printf("%d ", num);
			}	
		}
		if(num == 0){
			printf("-1\n"); 	
		}
		num = 0; 
	}
	
	return 0;
} 
