#include<stdio.h>

int main(){
	int a[11] = {0};
	int n = 10;
	int length = 1;//�洢��a[0]���һ����0������λ�� 
	
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
	}//�˳�ѭ����a[length]��Ϊ��һ����Ϊ0��"���ĸ���" 
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
//����0-9���ָ����ɸ���������˳��������Щ���֣�ʹ�����õ�����������С��0 ��������λ����
//����:
//��һ���и��� 10 ���Ǹ�������˳���ʾ���� 0������ 1���������� 9 �ĸ�������������һ���ո�ָ���10 �����ֵ��ܸ��������� 50��������ӵ�� 1 ���� 0 �����֡�
//���:
//��һ��������ܹ���ɵ���С������ 
