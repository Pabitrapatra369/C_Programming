#include<stdio.h>
int main(){
	int n,m,rev=0,i;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	while(n){
		i=n%10;
		n=n/10;
		rev=rev*10+i;
		
	}
	if(m==rev)printf("it is a palindrom number");
	else printf("not a palindrome");
	return 0;
}
