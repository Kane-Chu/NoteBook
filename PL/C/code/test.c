/**
���ڳ���Ϊ6λ��һ��01����ÿһλ��������0��1��һ����64�ֿ��ܡ�����ǰ�����ǣ�
000000
000001
000010
000011
000100
�밴��С�����˳�������64��01����
*/

#include <stdio.h>
void func(int n);//�������� 

int main(){
	int i;
	for(i=0;i<64;i++){//ѭ��С�����˳�������64��01��
		func(i);//���ú�����ʵ��һ��01����� 
		printf("\n"); 
	}
	return 0;
} 

void func(int n){
	int j;
	int a[6];
	for(j=0;j<6;j++){//ʵ��10���ƺͶ�����ת�� 
		a[j] = n%2;
		n /= 2;
	}
	for(j=5;j>=0;j--){//���01�� 
		printf("%d",a[j]);
	}
}