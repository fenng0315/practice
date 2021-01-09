#include<stdio.h>
#include<math.h>//输入:第1行是一个整数n，表示随后有n组数据。每组数据占一行，包含一个整数m(-10000<=m<=10000)。
				//输出:对每组数据m，计算m的平方根，精确到小数点后2位。如果m没有平方根，则输出ERROR。

int main(){
	int num;
	double res;
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d", &num);
		if(num>=0){
			res = sqrt(num);
			printf("%.2f\n", res);
		} 
		else{
			printf("ERROR\n");
		}
	}
	return 0;
}
