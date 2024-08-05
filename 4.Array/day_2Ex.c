#include <stdio.h>
int main() {
   int a[16],b,i,j,k;
   puts("enter the value in decimal form:");
   scanf("%d",&b);
   i=b;
   	   for(j=15;j>=0;j--){
   	   	 		a[j]=b%2;
   	   	 		b=b/2;
		}
   printf("the binary value of %d is :",i);
   for(k=0;k<16;k++)printf("%d",a[k]);
}
