#include <stdio.h>
#include <string.h>

int main(){
	char a[1000] = {'0'};
	int len = 0;//a���鳤��
	int i = 0;
	int j = 0;
	int k = 0;
	int temp = 0;
	 
	gets(a);
    len = strlen(a);
    for(; i<len; i++){
    	temp = a[i];
        if(temp<65 || temp>122){   			
            for(k=i-1; k>=j; k--){//�������ǿո���������ַ�������ʱ��ֱ����k����ǰһ�������������
                printf("%c",a[k]);
        	}
            printf("%c", a[i]);//��Ϊ�����ǲ�Ϊ�ո����������Ի�Ҫ������֮��ֱ�����
            j = i+1;//��¼�����ո���߱�����ʱ����i
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
