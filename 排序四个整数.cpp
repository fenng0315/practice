#include <stdio.h>

int main(){
    int n, i = 0;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        int a, b, c, d;
        int temp = 0;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a>=b){
			temp = b;
			b = a;
			a = temp;
		} 
		if(b>=c){
			temp = c;
			c = b;
			b = temp;
		}
		if(c>=d){
			temp = d;
			d = c;
			c = temp;
		}
		if(a>=b){
			temp = b;
			b = a;
			a = temp;
		} 
		if(b>=c){
			temp = c;
			c = b;
			b = temp;
		}
		if(c>=d){
			temp = d;
			d = c;
			c = temp;
		}
		if(a>=b){
			temp = b;
			b = a;
			a = temp;
		} 
		if(b>=c){
			temp = c;
			c = b;
			b = temp;
		}
		if(c>=d){
			temp = d;
			d = c;
			c = temp;
		} 
    printf("%d %d %d %d\n", a, b, c, d);		
    }

    return 0;
}


