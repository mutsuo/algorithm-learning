#include<stdio.h>
#define CLK_TCK 100
int main(){
	int c1,c2;
	scanf("%d %d",&c1,&c2);
	double t = (c2-c1) / CLK_TCK;
	int hh=0,mm=0,ss=0;
	
	//ËÄÉáÎåÈë 
	int temp = t;
	if(temp%100>=50)
		t ++;
	
	hh = t / 3600;
	t = t - hh*3600;
	
	mm = t / 60;
	t = t - mm*60;
	
	ss = t;
	
	printf("%02d:%02d:%02d\n",hh,mm,ss);
	
	return 0;
	
}
