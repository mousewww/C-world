#include <stdio.h>
int main()
{    
    int a=0;
    int m=0,n=0;
	printf("����0~100000�е�һϵ������\n");
		printf("����-1��ʾ��������\n");
		
	while(a!=-1){
	scanf("%d", &a);
	if(a%2==0){
		m++;
	}else if(a>0){
		n++;
	}
}
	printf("%d %d",n,m);
	
	return 0;
} 
