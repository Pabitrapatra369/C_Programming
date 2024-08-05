#include<stdio.h>
int main(){
	int i,t,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		
		
	  	for(t=1;t<=9;t++){
			printf("%d*%d=%d\t",t,i,t*i);
		}
		printf("\n");
	}
	return 0;
}
