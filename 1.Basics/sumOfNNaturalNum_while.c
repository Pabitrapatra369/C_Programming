#include<stdio.h>
int main(){
	int n,sum=0;
	printf("enter n value:");
	scanf("%d",&n);
	int temp=n;
	while(n>=1){
		sum+=n;
		n--;
		
	}
	printf("the sum of n natural from 1 to %d number=%d",temp,sum);
}
