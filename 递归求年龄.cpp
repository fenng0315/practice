#include<stdio.h>

int cal(int n, int a, int k)
{
	if (n < 2)
	return a;
	else
	return k + cal(n-1, a, k);
}

int main()
{
	int n, a, k;
	printf("请输入三个正整数n、a和k\n");
	scanf("%d%d%d", &n, &a, &k);
	if (n > 0 && n <= 100 && k > 0 && k <= 100 && a > 0 && a <= 100 && n >= 2)
		printf("%d", cal(n, a, k));
	else
		printf("Wrong Number");
		
return 0;
}
