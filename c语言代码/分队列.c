#include <stdio.h>
int main()
{
	int n=0;
	int a=1;
	printf("请输入队列人数\n"); 
	scanf("%d",&n);
	while(a<=n){
		if(a%2!=0){
				printf("%d ",a);
		}
		a++; 
	}
     return 0;
}
