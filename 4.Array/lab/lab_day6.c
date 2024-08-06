#include<stdio.h>
int main(){
//Write a C program that finds pairs in an array whose sum is 15.
/*	int a[100],i,j,n,sum;
	puts("Enter the size of array:");
	scanf("%d",&n);
	puts("Enter %d elements in the array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the the sum size:");scanf("%d",&sum);
	puts("Pairs are:");
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==sum)printf("(%d,%d)",a[i],a[j]);
			printf("\n");
		}
	}   */
//Write a C program that prints the elements of a given array in a specific format. 
/*	int a[100],i,j,n,sum;  **
	puts("Enter the size of array:");
	scanf("%d",&n);
	puts("Enter %d elements in the array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Pairs are:");
	for(i=0;i<n/2;i++){
		printf("%d %d\n",a[i],a[n-i-1]);
	}  */
//move all zeros to last
/*	int a[100],i,j,n,sum;   
	puts("Enter the size of array:");
	scanf("%d",&n);
	puts("Enter %d elements in the array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("your array:");
	for(i=0;i<n;i++){
		if(a[i]==0){
			for(j=i;j<n;j++)a[j]=a[j+1];
			a[n-1]=0;
			
		}
	}
	for(i=0;i<n;i++)printf("%d  ",a[i]);    */
//print the missing element of the given  integer array
/*	int a[100],b[100]={0},i,j,n,sum;   
	puts("Enter the size of array:");
	scanf("%d",&n);
	puts("Enter %d elements in the array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("your array:");  
	for(i=0;i<n-1;i++){
		int b;
		for(b=a[i],j=1;j<a[i+1]-a[i];j++)printf("%d  ",++b);
	}  */
//Write a C program that modifies a given array in a wave pattern and prints the resulting array. 
/*	int a[100],b[100]={0},i,j,n,sum;  
	puts("Enter the size of array:");
	scanf("%d",&n);
	puts("Enter %d elements in the array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=i+i;j<n;j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}		

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			
			if(a[i]<a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
				i++;
				break;
			}
		}
	}
	
	for(i=0;i<n;i++)printf("%d  ",a[i]);  */
}
