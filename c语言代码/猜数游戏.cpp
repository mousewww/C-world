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
		printf("���Ѿ������һ�����������²¿�\n");
		scanf("%d",&number);
		count++; 
		if(number>answer){
				printf("����\n");
		}else if(number<answer){
				printf("С��\n");
		}
	}while(number!=answer);	
	printf("��ֻ����%d�ξͲ�����.\n",count);
	return 0;
}
