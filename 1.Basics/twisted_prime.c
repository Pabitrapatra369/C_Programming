#include<stdio.h>
int main(){
	int  n,i,c=0,rev=0,r;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)if(n%i==0)c++;
	int m=n;
	while(m){
		r=m%10;
		m/=10;
		rev=rev*10+r;
	}
	if(c==2){
		c=0;
		for(i=1;i<=rev;i++)if(rev%i==0)c++;
		if(c==2)printf("n is a twisted prime");
		else printf("n is not a twisted prime");
	}
	else printf("n is a composite number");
}
