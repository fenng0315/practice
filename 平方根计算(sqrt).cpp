#include<stdio.h>
#include<math.h>//����:��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�У�����һ������m(-10000<=m<=10000)��
				//���:��ÿ������m������m��ƽ��������ȷ��С�����2λ�����mû��ƽ�����������ERROR��

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
