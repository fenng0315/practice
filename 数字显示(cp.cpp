#include <stdio.h>//copy的
 
char a[7][70]={//7*70的数组（包含数字后的空格）

'*','*','*','*','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*',' ',' ',' ','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ',

'*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',

'*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',

'*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ',

'*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',

'*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','*',' ',' ',

'*','*','*','*','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*','*','*','*',' ',' ','*','*','*','*','*',' ',' '

};


int main(){
	int n; 
	int b[100];

	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &b[i]);
	}

	for(int i = 0; i < n; i++){

		printf("%d:\n",b[i]);
		int t = b[i];
		int p;
		// 将a[i]倒序放入x[5]中
		int x[5],j=0;
		
		do{
			p = t%10;
			x[j] = p;
			j ++;
		}while((t = t/10) != 0);

		int l = j;

		// 打印b[i]
		// 每个数字占7行

		for(int k = 0; k < 7; k++){

		// 逐行打印单个数字(共l个数字)
	
		for(j--;j >=0; j--){// 每个数字占7列（包括空格）
			for(int m = 0; m < 7; m++){
				printf("%c",a[k][x[j]*7 + m]);
			}
		}

		j = l;// 换行

		printf("\n");
		}
	}
	
return 0;
}
