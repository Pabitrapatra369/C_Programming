#include<stdio.h>
int main(){
	int n,i,flag=0,r,rev,m;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	while(m){
		r=m%10;
		m=m/10;
		rev=rev*10+r;
	}
    for(i=2;i<=n/2;i++){
    	if(n%i==0){
		printf("composite");
		return ;
	    }
	    flag=1;
	}
	
	if(flag){
		if(rev>1&&rev<10){
	       printf("it is a twisted prime");
	       return;	
		}else{
		
		for(i=2;i<=rev/2;i++){
    	if(rev%i==0){
		  printf("it is not a twisted prime");
		  return;
	                }
          }
        printf("it is a twisted prime");
	    return ;
     	}
	return 0;	
    }
}
