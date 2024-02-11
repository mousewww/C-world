#include <stdio.h>
int main()
{    
    int a=0;
    int m=0,n=0;
	printf("输入0~100000中的一系列整数\n");
		printf("输入-1表示结束程序\n");
		
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
