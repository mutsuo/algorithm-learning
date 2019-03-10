#include<stdio.h> 
int main(){
	int T;
	int no = 0;
	scanf("%d",&T) ;
	while(T--){
		no++;
		long long a,b,c;
		scanf("%lld %lld %lld",&a, &b, &c);
		if(a+b>c)
			printf("Case#%d:true\n",no);
		else
			printf("Case#%d:false\n",no);
	}
	return 0;
}
