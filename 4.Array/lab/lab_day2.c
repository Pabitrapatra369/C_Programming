#include<stdio.h>
#include<limits.h>
int main(){
//Write a C program to Sort the array in ascending order and print it.
/*   int a[100],i,j,n;
   puts("Enter the array size:");
   scanf("%d",&n);
   printf("Enter %d elements",n);
   for(i=0;i<n;i++)scanf("%d",&a[i]);
   for(i=0;i<=n-2;i++){
   	for(j=i+1;j<n;j++){
   		if(a[i]>a[j]){
   			int temp=a[i];
   			a[i]=a[j];
   			a[j]=temp;
		   }
	   }
   }
   puts("Elements are:");
   for(i=0;i<n;i++)printf("%d  ",a[i]);
   */
//Write a C program to Sort the array in descending order and print it.
/*  int a[100],i,j,n;
   puts("Enter the array size:");
   scanf("%d",&n);
   printf("Enter %d elements",n);
   for(i=0;i<n;i++)scanf("%d",&a[i]);
   for(i=0;i<=n-2;i++){
   	for(j=i+1;j<n;j++){
   		if(a[i]<a[j]){
   			int temp=a[i];
   			a[i]=a[j];
   			a[j]=temp;
		   }
	   }
   }
   puts("Elements are:");
   for(i=0;i<n;i++)printf("%d  ",a[i]);
*/
//Write a C program to find the element given by user is present in the array or not ? 
//If the element is present in the array also programmer have to print 
//index position of that searching element.
//If the user pass the element for searching in the array is not present
//then also provide a appropriate message to the user that element is not 
//present inside the array.
/*	int a[20]={1,2,3,4,3,6},i,n,f=0;
	printf("Enter the number you want to search:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(a[i]==n)f=i;
	}
	if(f==0)puts("The element which you have sreached is not present inside the Array.");
    else printf("The element which you have sreached is present inside the %dth index.",f);
*/
//Write a C program to find the min element from an array.
/*  int a[100],i,n,j,min=INT_MAX;
   puts("Enter the array size:");
   scanf("%d",&n);
   printf("Enter %d elements",n);
   for(i=0;i<n;i++)scanf("%d",&a[i]);
   for(i=0;i<n;i++){
   	   if(a[i]<min)min=a[i];
   }
    printf("min element is :%d",min);
   */
//Write a C program to find the max element from an array.
/*	int a[100],i,n,j,max=INT_MIN;
   puts("Enter the array size:");
   scanf("%d",&n);
   printf("Enter %d elements",n);
   for(i=0;i<n;i++)scanf("%d",&a[i]);
   for(i=0;i<n;i++){
   	   if(a[i]>max)max=a[i];
   }
    printf("min element is :%d",max);
    */
}
