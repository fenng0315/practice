#include<stdio.h>
#include<stdlib.h>

int main(){
   char table[21][32];//������ʾ���ı��
   int num[21];//�洢����ָ��
   char cha[21];//�洢����ָ��
   int n, i, j = 0;//�������� 
   
   scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &num[i]);
        scanf("%c", &cha[i]);
    }
    
    int rowmax=0, rowmin=0;//��ʾx���Ϸ����·����ж�����
    
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
