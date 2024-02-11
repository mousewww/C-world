#include<stdio.h>
#include<stdlib.h>
#include<time.h>
       int main()
{
    srand(time(0));
	int a=rand();
	int answer=a%10000;
	int count=0;
	int number;
	do{
		printf("我已经想好了一个数，你来猜猜看\n");
		scanf("%d",&number);
		count++; 
		if(number>answer){
				printf("大了\n");
		}else if(number<answer){
				printf("小了\n");
		}
	}while(number!=answer);	
	printf("你只用了%d次就猜中了.\n",count);
	return 0;
}
