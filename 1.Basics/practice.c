#include<stdio.h>

int main(){
	int p,b;
	float r=1,sum=0;
	printf("Enter the base and power:");scanf("%d%d",&b,&p);
	while(p>=1){
		r=r*b;
		sum=sum+r;
		p--;
	}
	printf("the sum of the power is:%.3f",sum);
}
