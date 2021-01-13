#include<stdio.h>
#include<stdlib.h>

int main(){
   char table[21][32];//最终显示出的表格
   int num[21];//存储数字指令
   char cha[21];//存储符号指令
   int n, i, j = 0;//计数数字 
   
   scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &num[i]);
        scanf("%c", &cha[i]);
    }
    
    int rowmax=0, rowmin=0;//表示x轴上方和下方各有多少行
    
    for(i=0; i<n; i++){
        if(num[i]>0 && rowmax<num[i]){
            rowmax = num[i];
		}
        else if(num[i]<=0 && rowmin>num[i]){
            rowmin = num[i];
        }
    }
    
    int row = rowmax - rowmin + 1;

    for(j=0; j<n; j++){
        if(num[j]>0){
            for(i=0;i<row;i++){
                if(i<rowmax-num[j]){
                    table[i][j]=' ';
                }
                else if(i<rowmax && i>=rowmax-num[j]){
                    if(cha[j] == ' ' || cha[j] == '\n'){
                        table[i][j] = '+';
                    }
                    else{
                        table[i][j] = cha[j];
                    }
                }
                else if(i == rowmax){
                    table[i][j] = '-';
                }
                else{
                    table[i][j] = ' ';
                }
            }
        }
        else{
            for(i=0;i<row;i++){
                if(i < rowmax){
                    table[i][j]=' ';
                }
                else if(i == rowmax){
                    table[i][j] = '-';
                }
                else if(i>rowmax && i<=rowmax-num[j]){
                    if(cha[j]==' ' || cha[j]=='\n'){
                        table[i][j] = '+';
                    } 
					else{
                        table[i][j] = cha[j];
                    }
                }
                else{
                    table[i][j] = ' ';
				}
            }
        }
    }

    for(i=0; i<row; i++){
        if(i == rowmax){
            for(j=0; j<n; j++){
                if(j == n-1){
                    printf("%c", table[i][j]);
                }
                else{
                    printf("%c-", table[i][j]);
                }
            }
        }
        else{
            for(j=0; j<n; j++){
                printf("%c ", table[i][j]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
