#include<stdio.h> 

int main(){
	int num = 0;
	int num_new = 0;
	int num_shadow = 0;
	int n;
	
	scanf("%d", &n);
	for(;n > 0; n--){
	scanf("%d", &num);
	num_shadow = num;
	while(num > 0){
		num_new = num%10 + num_new*10;
		num = num/10;
	}
	if(num_new == num_shadow){
		printf("Yes\n");
	}
	else printf("No\n");
	num_new = 0; 
	}
	return 0;
}
