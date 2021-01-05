#include<stdio.h>

int main(){
	int a[11] = {0};
	int n = 10;
	int length = 1;//存储除a[0]外第一个非0的数的位次 
	
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(int i=1; i<n; i++){
		if(a[i]!=0){
			break;
		}
		else{
			length++;
		}
	}//退出循环后，a[length]即为第一个不为0的"数的个数" 
	printf("%d", length);
	if(a[0]!=0){
		for(int i=0; i<a[0]; i++){
			printf("%d", 0);
		}
	}
	for(int i=1; i<a[length]; i++){
		printf("%d", length);
	}
	for(length=length+1; length<n; length++){
		if(a[length]!=0){
			for(int N=0; N<a[length]; N++){
				printf("%d", length);
			}
		}						
	}
	printf("\n");
	
	return 0;	
}
//给定0-9数字各若干个，以任意顺序排列这些数字，使得最后得到的数尽可能小（0 不能做首位）。
//输入:
//在一行中给出 10 个非负整数，顺序表示数字 0、数字 1、……数字 9 的个数。整数间用一个空格分隔。10 个数字的总个数不超过 50，且至少拥有 1 个非 0 的数字。
//输出:
//在一行中输出能够组成的最小的数。 
