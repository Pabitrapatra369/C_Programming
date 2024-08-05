#include<stdio.h>
int main(){
//Deleting Array Element
	int a[100],i,j,n,ele;
	puts("Enter array size:");
	scanf("%d",&n);
	puts("Enter array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the element you want to delete:");
	scanf("%d",&ele);
	for(i=0;i<n;i++){
		if(a[i]==ele){
			a[i]=a[i+1];
			n--;
			i--;
		}
		
	}
	puts("Elements are :");
	for(i=0;i<n;i++)printf("%d  ",a[i]);
}
