#include<stdio.h>
int main(){
	long long a,b,da,db,pa=0,pb=0;
	scanf("%lld %lld %lld %lld",&a,&da,&b,&db);
	//process a
	while(a!=0) {
		if(a%10==da){
			pa = pa*10+da;
		}
		a /= 10;
	}
	//process b
	while(b!=0){
		if(b%10==db){
			pb = pb*10+db;
		}
		b /= 10;
	}
	
	printf("%lld\n",pa+pb);
	
	return 0;
}
