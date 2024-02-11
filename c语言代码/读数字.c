#include<stdio.h>
void pinyin(int a); 
//读入整数 
//分离数位 
//翻译成汉语拼音
//负数前要加fu 
//输出 

int main()
{   int i;
	printf("请输入一个整数\n");
	scanf("%d",&i);
	jisuan(i);
	return 0;
}
void pinyin(int a)
{
	switch(a)
	{
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;	
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;	
		case 9:
			printf("jiu");
			break;
		case 0:
			printf("ling");
			break;	
		default:
		break;					
	}
	
}
int jisuan(int i)
{   int j;
    int shuzi[5];
    int k=0;
	if(i<0){
		printf("fu ");
		i*=-1;
	}
	if(i<10){
		pinyin(i);
	}else if(i>10){
	
	for(;i>0;){
		shuzi[k]=i%10;
		i/=10;
		k++;
	}
}
	int z=k;
		for(;z>0;){
			j=shuzi[z-1];
			pinyin(j);
			if(z!=1){
			printf(" ");
			}
			z--;
			
		}
}
	
		
