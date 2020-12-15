#include<stdio.h>
int main(){
  int n1, n2, n3, n4, n5, a, b, c, d, e, q;
  while(1){
  	for(;;) {
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5) ;
	if(n1==0 && n2==0 && n3==0 && n4==0 && n5==0){
	return 0;
	}
    if(n2-n1==n3-n2 && n3-n2==n4-n3 && n4-n3==n5-n4 && n2*n2==n1*n3 && n3*n3==n2*n4 && n4*n4==n3*n5){
	q = n2-n1;
    a = n5+q;
    b = a+q;
    c = b+q;
    d = c+q;
    e = d+q;
	printf("case one\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    printf("case two\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    }
    else if(n2-n1==n3-n2 && n3-n2==n4-n3 && n4-n3==n5-n4){
	q = n2-n1;
    a = n5+q;
    b = a+q;
    c = b+q;
    d = c+q;
    e = d+q;
	printf("case one\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    }
    else if(n2*n2==n1*n3 && n3*n3==n2*n4 && n4*n4==n3*n5){
	q = n2/n1;
    a = n5*q;
    b = a*q;
    c = b*q;
    d = c*q;
    e = d*q;
    printf("case two\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    }
    else if(n1+n2==n3 && n2+n3==n4 && n3+n4==n5){
	a = n4+n5;
    b = n5+a;
    c = a+b;
    d = b+c;
    e = c+d;
    printf("case three\n");
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    }
   }
  }
  return 0;
}

