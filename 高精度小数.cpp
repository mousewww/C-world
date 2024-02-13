#include<stdio.h>
//读入两个整数a/b<0
//shang[0]=a*10/b
//yushu[0]=a*10%b
//shang[1]=a[0]*10/b
//yushu[1]=a[0]10%b
//while(d!=0)
	int main()
{
	int shang[200];
	int yu[200];
	int a,b;
		printf("请输入a/b（a<b）\n");
	scanf("%d/%d",&a,&b);
	int i=1;
	int k=0;
	shang[0]=a*10/b;
  	yu[0]=a*10%b;
  for(;i<200;i++){
	  shang[i]=yu[i-1]*10/b;
	  yu[i]=yu[i-1]*10%b;  
	  if(yu[i]==0){
	  	break;
	  }
	  }
//	  printf("%d",shang[i]);
//	  printf("%d",yu[i]);       
  		//遍历数组 
  		printf("0.");
  		for(k=0;k<i;k++){
  			printf("%d",shang[k]);
  			if(k==i-1){
  				printf("\t");
			  }
		  }
  		return 0;
	  }
 
