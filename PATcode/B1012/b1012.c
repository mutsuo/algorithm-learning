#include<stdlib.h> 
#include<stdio.h>

int isexist(int a){
	if(a==0) return 0;
	else return 1;
}
int main(){
	int n;
//	int count_arr[5]={0};
	int sum_4A1 = 0;
	int sum_4A2 = 0;
	int count_4A3 = 0;
	int avg_4A4 = 0;
	int max_4A5 = -1;
	
	scanf("%d",&n);
	//����A2����У��ж������е�ż��λ���ǻ���λ�� 
	//1=true+ 0=false- 
	int index = 0;
	//����A4������У���¼�������������ĸ��� 
	int n_4A4 = 0;
	while(n--){
		int a;
		scanf("%d",&a);
		switch(a%5){
			case 0:
				if(a%2==0) sum_4A1+=a;
				break;
			case 1:
				index = (index+1) %2;
				if(index) sum_4A2+=a;
					else  sum_4A2-=a;
				break;
			case 2:
				count_4A3++;
				break;
			case 3:
				avg_4A4+=a;
				n_4A4++;
				break;
			case 4:
				if(a>max_4A5) max_4A5=a;
				break;
		}
	}
	
	if(isexist(sum_4A1)) printf("%d",sum_4A1);
		else printf("N");
	if(isexist(sum_4A2)) printf(" %d",sum_4A2);
		else printf(" N");
	if(isexist(count_4A3)) printf(" %d",count_4A3);
		else printf(" N");
	if(isexist(n_4A4)) printf(" %.1f",(double)avg_4A4/n_4A4);
		else printf(" N");
	if(max_4A5!=-1) printf(" %d\n",max_4A5);
		else printf(" N\n");
	//output
	
	return 0;
}
