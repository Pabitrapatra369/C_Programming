#include<stdio.h>
int main(){
	int n,count=0,digit;
	
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		count++;
		n/=10;
		
	}
	printf("the sum of the digits=%d",count);
}
