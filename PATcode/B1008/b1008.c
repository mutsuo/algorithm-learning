#include<stdio.h>
int main(){
	int n,m;
	int arr[101];
	
	//input 
	scanf("%d %d",&n,&m);
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	//process
	m%=n;
	int count = 0;
	for(i=(n-m)%n;count<n;i=(i+1)%n){
		if(count<n-1)
			printf("%d ",arr[i]);
		else if(count==n-1)
			printf("%d\n",arr[i]);
		count++;
	}
	
	return 0;
}
