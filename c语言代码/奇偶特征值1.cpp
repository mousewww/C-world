#include<stdio.h>
int main()
{
	int number;
	int input;
	int count=0;
	int output=1;
	int answer=0;
	int num=1;
	printf("������һ���Ǹ�����\n");
	scanf("%d",&input);
	while(input>0){
			//ȡ�����һλ�� 
		number=input%10;
		//��λ��1 
		count++;
		//�ж���ż��һ�� 
		if(number%2==0&count%2==0)
		{
			output=1;
		}
		else if(number%2!=0&count%2!=0)
		{
				output=1;
		}
		else
		{
			output=0;
		}
//		�����������Ӷ�������ֵ 
		if(output==1)
		{
			answer+=num;
		}
//		ɾȥ���һλ�� 
		input=input/10;
//		��������ֵ 
		num*=2;
	}
		printf("%d",answer);
	return 0;
} 
