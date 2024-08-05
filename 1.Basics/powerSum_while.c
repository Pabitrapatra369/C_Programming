#include<stdio.h>

int main(){
	int p,b;
	float r=1,sum=0,k;
	printf("Enter the base and power:");scanf("%d%d",&b,&p);
	if(p>=0){
	while(p>=1){
		r=r*b;
		sum=sum+r;
		p--;
	}
	printf("the sum of the power is:%.3f",sum);
    }else{
    	if(p<0)p=-p;
    	while(p>=1){
    	r=r*b;
		k=1.0/r;
		sum=sum+k;
		p--;
	}
	printf("the sum of the power is:%.3f",sum);
	}
}
