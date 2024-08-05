#include<stdio.h>
int main(){
	int n,sum=0,digit;
	
	printf("enter a 3 digit number:");
	scanf("%d",&n);
	while(n!=0){
		digit=n%10;
		sum+=digit;
		n/=10;
		
	}
	printf("the sum of the digits=%d",sum);
}
