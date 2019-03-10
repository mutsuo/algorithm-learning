#include<stdio.h> 
int main(){
	int a_count = 0,b_count = 0;//·£¾Æ´ÎÊý 
	int n;
	scanf("%d",&n);
	
	while(n--){
		int a1,a2,b1,b2;
		scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
		if(a1+b1==a2 && a1+b1!=b2)
			b_count++;
		if(a1+b1==b2 && a1+b1!=a2) 
			a_count++;
	}
	
	printf("%d %d\n",a_count,b_count);
	
	return 0;
}
