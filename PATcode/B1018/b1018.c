#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int ch2num(char a){
	switch(a){
		case 'C':return 1;break;
		case 'J':return 0;break;
		case 'B':return 2;break;
	}
}
char num2ch(int*arr){
	int i;
	int max_index=0;
	for(i=0;i<3;i++)
		if(arr[i]>=arr[max_index])
			max_index=i;
	switch(max_index){
		case 0:return 'J';
		case 1:return 'C';
		case 2:return 'B';
	}
}
int fun(int a,int b,int *win_a,int *win_b,int *tie){
	if(abs(a-b)==1){
		if(a>b){
			(*win_a)++;
			return 1;
		}
		else{
			(*win_b)++;
			return 2;
		}
	}else if(abs(a-b)==2){
		if(a>b) {
			(*win_b)++;
			return 2;
		}
		else if(b>a){
			(*win_a)++;	
			return 1;
		}
	}else if(a==b){
		(*tie)++;
		return 0;
	}
}
int main(){
	int n;
	int win_a=0,win_b=0,tie=0;
	int gesture_a[3]={0};
	int gesture_b[3]={0};
	
	scanf("%d",&n);
	while(n--){
		char chr_a,chr_b;
		getchar();
		scanf("%c %c",&chr_a,&chr_b);
		int a=ch2num(chr_a);
		int b=ch2num(chr_b);
		switch(fun(a,b,&win_a,&win_b,&tie)){
			case 1:gesture_a[a]++;break;
			case 2:gesture_b[b]++;break;
		}
	}
	
	//output
	//a
	printf("%d %d %d\n",win_a,tie,win_b);
	printf("%d %d %d\n",win_b,tie,win_a);
	printf("%c %c\n",num2ch(gesture_a),num2ch(gesture_b));
	
	
	return 0;
}

