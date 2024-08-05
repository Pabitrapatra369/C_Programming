#include<stdio.h>
int main(){
	int n;
	long fact=1;
	printf("Enter the n value:");
	scanf("%d",&n);
	int temp=n;
	while(n>=1){
		fact*=n;
		n--;
	}
	printf("the factorial of %d is %d",temp,fact);
	}
