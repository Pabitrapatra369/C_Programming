#include<stdio.h>

#include<limits.h>
int main(){
//Chocolate Distribution Problem
/*	int a[100],i,j,n,m;
	puts("Enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the number of students:");
	scanf("%d",&m);
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	
	int mindiff=INT_MAX;
	for(i=0,j=m-1;j<n;i++,j++){
		if(a[j]-a[i]<mindiff)mindiff=a[j]-a[i];
	}
	printf("the minimum difference is %d",mindiff);
	
	//for(i=0;i<n;i++)printf("%d  ",a[i]);
	 */
	
//Program to cyclically rotate an array by one
//the task is to cyclically rotate the array clockwise by one time. 
/*	int a[100],i,j,n,m;
	puts("Enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	int temp=a[n-1];
	for(i=n-1;i>=1;i--){
		a[i]=a[i-1];
	}
	a[0]=temp;
	puts("after rotate 1 time:");
	for(i=0;i<n;i++)printf("%d ",a[i]);   */
//Write a c program to find the K’th Smallest in Unsorted Array 	
/*	int a[100],i,j,n,k;
	puts("Enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the kth smallest nubmer you want to find");
	scanf("%d",&k);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	//for(i=0;i<n;i++)printf("%d  ",a[i]);
	int small=k;
	for(i=0;i<n;i++){
		if(a[i]<a[i+1]){
			small--;
			if(small==0)printf("%dth small element is %d",k,a[i]);
		}
	}   */
	
//merge two array
/*	int a[100],b[100],i,j,n,m;
	puts("Enter the first array size:");
	scanf("%d",&n);
	puts("Enter the first  array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the second array size:");
	scanf("%d",&m);
	puts("Enter the second array elements:");
	for(i=0;i<m;i++)scanf("%d",&b[i]);
	puts("Merged array is:");
	
	for(j=0,i=n;i<m+n;i++,j++){
		a[i]=b[j];
	}
	for(i=0;i<m+n;i++)printf("%d ",a[i]);
*/
}
