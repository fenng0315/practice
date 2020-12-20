#include<stdio.h>
#include<math.h> 

int main(){
	int n = 0;
	int a = 0;
	int amax = 0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if(abs(a) > abs(amax)){
			amax = a;
		}
	}
	printf("%d", amax);
	
	return 0;
}
