#include<stdio.h>
int main(){
// Deleting array element permanently from array
/*	int a[100],n,pos,i,j;
	puts("enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	a:
	puts("\nEnter the position you want to delete:");scanf("%d",&pos);
	if(pos<1||pos>n){
		printf("position 1 to %d only.",n);
		goto a;
	}
	else{
	for(i=pos-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)printf("%d ",a[i]);
    }   */
//Selection Sort
// Selection sort in Ascending order:
/*	int a[100],n,i,j;
	puts("enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	puts("Elements are :\n");
	for(i=0;i<n;i++)printf("%d ",a[i]); */
// Selection sort in Descending order:	
/*	int a[100],n,i,j;
	puts("enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	puts("Elements are :\n");
	for(i=0;i<n;i++)printf("%d ",a[i]);  */
//Bubble sort in Ascending order:
	int a[100],n,i,j;
	puts("enter the array size:");
	scanf("%d",&n);
	puts("Enter the array elements:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	
	
}
