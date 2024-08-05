#include<stdio.h>
int main(){
//Write a program in C to store elements in an array and do the arithemetic operation .
/*	int a[100],i,j,n,sum=0,sub,mul=1;
	puts("Enter array size:");
	scanf("%d",&n);
	puts("Enter array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	sub=a[0];
	for(i=0;i<n;i++){
		sum+=a[i];
		if(i+1<n)sub-=a[i+1];
		mul*=a[i];
	}
	printf("Addition: %d\nSubtraction: %d\nMultiplication: %d",sum,sub,mul);
	*/
	
//Write a c program to find a specified element in a given array of elements using Linear Search.
/*	int a[100],i,j,n,ele,f=0;
	puts("Enter array size:");
	scanf("%d",&n);
	puts("Enter array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the number you want to search :");
	scanf("%d",&ele);
	for(i=0;i<n;i++){
		if(a[i]==ele)f=i;
	}
	if(f==0)printf("not found that element.");
	else printf("Element found at positon %d",f+1);  */
//Write a C program to perform a binary search in an array.
/*	int a[100],i,j,n,ele;
	puts("Enter array size:");
	scanf("%d",&n);
	puts("Enter array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the number you want to search :");
	scanf("%d",&ele);
	int s=0,e=n-1,mid,found,f=0;
	while(s<=e){
		mid=(s+e)/2;
		if(a[mid]==ele){
			found=mid;
			f=1;
			break;
		}
		else if(a[mid]>ele)e=mid-1;
		else if(a[mid]<ele)s=mid+1;
	}
	if(f==0)printf("not found that element.");
	else printf("Element found at positon %d",mid+1);
	  */
//Write a program in C to copy the elements of one array into another array.
/*    int a[100],b[100],i,j,n,ele;
	puts("Enter array size:");
	scanf("%d",&n);
	puts("Enter array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	puts("first array:");
	for(i=0;i<n;i++)printf("%4d",a[i]);
    puts("\nsecond array:");
	for(i=0;i<n;i++)printf("%4d",b[i]);
	*/
	
}
