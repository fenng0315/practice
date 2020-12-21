#include<stdio.h>

int main(){
	int n = 0;//需计算的组数 
	int j, k = 0;//计数 
	int r, rr = 0;//用于储存yes，no的数组计数 
	long int a, b ,c = 0;//输入三条边 
	char result[1000][1000] = {0};
	 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		getchar();
		scanf("%d %d %d", &a, &b, &c);
		if(a+b>c&&a+c>b&&b+c>a){
			if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
				result[j][k] = 'Y';
				result[j][k+1] = 'e'; 
				result[j][k+2] = 's';
				++j;
				k = 0;  
			}
			else{
				result[j][k] = 'N';
				result[j][k+1] = 'o';
				++j;
				k = 0;			
			}
		} 	
		else{
			result[j][k] = 'N';
			result[j][k+1] = 'o';
			++j;
			k = 0;			
		}		 
	} 
	for(; r<j+1; r++){
		if(result[r][0]=='Y'){
		    for(; rr<3; rr++){
	  			printf("%c", result[r][rr]);
	    		if(result[r][rr]=='s'){
	    		printf("\n");
		    	}
	   		}
			rr = 0;
		}
		else{
		    for(; rr<2; rr++){
	  			printf("%c", result[r][rr]);
	    		if(result[r][rr]=='o'){
	    		printf("\n");
		    	}	
	   		}
			rr = 0;
		}
	}
  		
	return 0; 
} 
