#include <stdio.h>
int main() 
{
    int Bhours=0,Bmin=0;
    int a=0;
    printf("������һ��0~2359������\n");
    scanf("%d",&a);
    Bhours=a/100;
    Bmin=a%100;
    int Uhours=Bhours-8,Umin=Bmin;
  if(Uhours>=0){
    printf("%d",Uhours*100+Umin);
}else{
	printf("%d",(Uhours+24)*100+Umin); 
} 
    return 0;
}
