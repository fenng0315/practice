#include <stdio.h>
#include <string.h>

int main(){
	char a[1000] = {'0'};
	int len = 0;//a数组长度
	int i = 0;
	int j = 0;
	int k = 0;
	int temp = 0;
	 
	gets(a);
    len = strlen(a);
    for(; i<len; i++){
    	temp = a[i];
        if(temp<65 || temp>122){   			
            for(k=i-1; k>=j; k--){//当遇到是空格或者整个字符结束的时候，直接让k等于前一个数，逆序输出
                printf("%c",a[k]);
        	}
            printf("%c", a[i]);//因为条件是不为空格的情况，所以还要逆序完之后直接输出
            j = i+1;//记录遇见空格或者标点符号时，的i
        }
        else if(temp>90 && temp<97){
        	for(k=i-1; k>=j; k--){
                printf("%c",a[k]);
        	}
            printf("%c", a[i]);
            j = i+1;
		}
    }
    printf("\n");

    return 0;
}
