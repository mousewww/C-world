#include<stdio.h>
int main()
{
	int m;
	int n;
	printf("�����n������m������֮���������,Ҫ��200>=m>=n>=0\n");
	scanf("%d %d",&n,&m);
	int answer=sushu(m,n);
	printf("��%d�������͵�%d������֮�����������%d",n,m,answer);
	return 0;
}
//�ж����� 
int panduan(int i)
{
	int ret=1;
	int k=2;
	for(;k<i-1;k++)
	{
		if(i%k==0){
			ret=0;
			break;
		}
	}
	return ret;
}
//���� 
int sushu(int m,int n)
{
	int sum=0;
	
	for(;n<=m;n++){
		sum+=suju(n,m);
	}
	
	return sum;
}
//�������������� 
int suju(int n,int m)
{
	int sushu[m];
	int i=0;
	int j=2;
	for(;i<m;j++){
		int z=panduan(j);
		if(z==1){
			sushu[i]=j;
			i++;
		}
	}
	int last=sushu[n-1];
	return last;
}
