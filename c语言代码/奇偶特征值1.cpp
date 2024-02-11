#include<stdio.h>
int main()
{
	int number;
	int input;
	int count=0;
	int output=1;
	int answer=0;
	int num=1;
	printf("请输入一个非负整数\n");
	scanf("%d",&input);
	while(input>0){
			//取出最后一位数 
		number=input%10;
		//数位加1 
		count++;
		//判断奇偶性一致 
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
//		条件成立增加二进制数值 
		if(output==1)
		{
			answer+=num;
		}
//		删去最后一位数 
		input=input/10;
//		二进制数值 
		num*=2;
	}
		printf("%d",answer);
	return 0;
} 
