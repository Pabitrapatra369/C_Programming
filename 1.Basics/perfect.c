#include<stdio.h>
int main(){
	int n,m,sum=0,i;
	printf("enter a number:");
	scanf("%d",&n);
    for(i=1;i<=n/2;i++){
    	if(n%i==0)sum+=i;
	}
	if(n==sum)printf("perfect");
	else printf("not perfect");
	return 0;
	
}
