#include<stdio.h>
int main(){
//Write a program in C to find the second smallest element in an array. 
/*	int a[100],n,r,c,rn,cn,secMin ;
	puts("Enter the array size:");
	scanf("%d",&n);
	printf("Input %d elements in the array (value must be < 9999) :",n);
	for(r=0;r<n;r++){ 
		scanf("%d",&a[r]);
	}
	for(r=0;r<n-1;r++){
		for(c=r+1;c<n;c++){
			if(a[r]>a[c]){
				a[r]=a[r]+a[c];
				a[c]=a[r]-a[c];
				a[r]=a[r]-a[c];
			}
		}
	} int min =a[0];
	for(r=1;r<n;r++){
    	if(a[r]>min){
    		min=a[r];break;
		}
	}
	printf("second minimun =%d",min);   */
//Write a C program to sort an array in ascending order.
/*	int a[100],n,r,c,rn,cn,secMin,temp ;
	puts("Enter the array size:");
	scanf("%d",&n);
	printf("Enter %d elements :",n);
	for(r=0;r<n;r++){ 
		scanf("%d",&a[r]);
	}
	puts("Before sorting");
	for(r=0;r<n;r++){ 
		printf("%d   ",a[r]);
	}
	puts("After Sorting in ascending order");  
	for(r=0;r<n-1;r++){ 
		for(c=r+1;c<n;c++){ 
			if(a[r]>a[c]){ 
				a[r]=a[r]+a[c];
				a[c]=a[r]-a[c];
				a[r]=a[r]-a[c];
			}
		}
	}
	puts("after sorting");
	for(r=0;r<n;r++){ 
		printf("%d   ",a[r]);
	}   */
//Write a C program to find the 2nd largest element from a array.
/*	int a[100],n,r,c,rn,cn,secMin ;
	puts("Enter the array size:");
	scanf("%d",&n);
	printf("Input %d elements in the array (value must be < 9999) :",n);
	for(r=0;r<n;r++){ 
		scanf("%d",&a[r]);
	}
	for(r=0;r<n-1;r++){
		for(c=r+1;c<n;c++){
			if(a[r]>a[c]){
				a[r]=a[r]+a[c];
				a[c]=a[r]-a[c];
				a[r]=a[r]-a[c];
			}
		}
	} int max =a[n-1];
	for(r=n-2;r>=0;r--){
    	if(a[r]<max){
    		max=a[r];break;
		}
	}
	printf("second largest =%d",max); */
//Write a program in C to separate odd and even integers in separate arrays.
/*	int a[100],n,r,c,rn,cn,secMin ;
	puts("Enter the array size:");
	scanf("%d",&n);
	printf("Input %d elements in the array :",n);
	for(r=0;r<n;r++){ 
		scanf("%d",&a[r]);
	}
	puts("The even elements are :");
	for(r=0;r<n;r++)if(a[r]%2)printf("%3d",a[r]);
	puts("\nThe Odd numbers are :");
	for(r=0;r<n;r++)if(a[r]%2==0)printf("%3d",a[r]);   */
	
}
