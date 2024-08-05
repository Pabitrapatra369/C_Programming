#include<stdio.h>
int main(){
//Arranging array elements in reverse order:
/*	int a[100],i,j,n;
	printf("Enter the array size:");
	scanf("%d",&n);
	puts("enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n/2;i++){
		int temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	puts("Elements are:");
	for(i=0;i<n;i++)printf("%d  ",a[i]);   */
//Linear Searching
/*	int a[100],i,j,n,e;
	printf("Enter the array size:");
	scanf("%d",&n);
	puts("enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter Element to search :");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(a[i]==e)printf("%d in %d cell.\n",e,i+1);
	}   */
//Finding index:
/*	int a[100],i,j,n,e;
	printf("Enter the array size:");
	scanf("%d",&n);
	puts("enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter Element to search :");
	scanf("%d",&e);
	for(i=0;i<n;i++){
		if(a[i]==e)printf("%d in a[%d] index.\n",e,i);
	}   */
//Finding nth occurrence of given array element
/*	int a[100],i,j,n,ele,occ,c=0;
	printf("Enter the array size:");
	scanf("%d",&n);
	puts("enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter Element to search and occurence :");
	scanf("%d%d",&ele,&occ);
	for(i=0;i<n;i++){
		if(a[i]==ele){
			c++;
			if(c==occ){
			printf("%d in %d cell %d time",ele,i+1,occ);
			break;
			}
		}
}
	if(c==0)puts("Element not found.");
	else if(c!=occ) printf("%d not found for %d time",ele,occ);
	*/
	
}
