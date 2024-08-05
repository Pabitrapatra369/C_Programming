#include<stdio.h>
int main(){
	int n,rev=0,digit;
	printf("Enter a number:");
	scanf("%d",&n);
	int temp =n;
	while(n!=0){
		digit=n%10;
		rev=rev*10+digit;
		n/=10;
	}
	printf("reverse of %d is %d",temp,rev);
}
