#include<stdio.h>
int main(){
//Write a program in C to print all unique elements in an array. 
/*	int a[100],b[100]={0},n,i,j,r,c;
	puts("Enter the  number of elements to be stored in the array: ");
	scanf("%d",&n);
	puts("Enter the elements in the array");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				b[i]=-1;
			    b[j]=-1;
			}
		}
	}
	printf("The unique elements found in the array are:");
	for(i=0;i<n;i++)if(b[i]==0)printf("%3d",a[i]);   */
//Write a program in C to count the frequency of each element of an array	
/*	int a[100],b[100]={0},n,i,j,r,c;
	puts("Enter the  number of elements to be stored in the array: ");
	scanf("%d",&n);
	puts("Enter the elements in the array");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	
	for(i=0;i<n;i++){
		if(b[i]==-1)continue;
		for(c=1,j=i+1;j<n;j++){
			if(a[i]==a[j]){
				c++;
				b[j]=-1;
			}
		}
		b[i]=c;
	}
	printf("The frequency of all elements of an array :\n");
	for(i=0;i<n;i++)if(b[i]==-1)continue;else printf("%d occurs %d times\n",a[i],b[i]);  */
	
//Write a program in C to insert New value in the array (sorted array ) at its proper respective position as its accending order.
/*	
	int a[100],b[100]={0},n,i,j,r,v;
	puts("Enter the  number of elements to be stored in the array: ");
	scanf("%d",&n);
	puts("Enter the elements in the array");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the value to be inserted:");
	scanf("%d",&v);
	for(j = 1; j < n; j++){
		if(v<=a[0]){
			j=0;
			break;
		}
		if(a[j-1] < v && a[j]>v){
			break;
		}
	}
	//printf("%d",j);
	for(i=n;i>j;i--){
		a[i]=a[i-1];
		
	}
	a[j]=v;
	for(i=0;i<=n;i++)printf("%3d  ",a[i]);    
	*/
//Write a program in C to delete an element at desired position from an array. 
/*	int a[100],n,i,j,r,v;
	puts("Enter the  number of elements to be stored in the array: ");
	scanf("%d",&n);
	puts("Enter the elements in the array");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the position which to delete:");
	scanf("%d",&v);
	for(i=0;i<n;i++){
		if(a[i]==v){
			for(j=i;j<n;j++)a[j]=a[j+1];
			n--;
			break;
		}
	}
	for(i=0;i<n;i++)printf("%3d  ",a[i]);  */
//delete all same element
/*	int a[100],n,i,j,r,v;
	puts("Enter the  number of elements to be stored in the array: ");
	scanf("%d",&n);
	puts("Enter the elements in the array");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	puts("Enter the position which to delete:");
	scanf("%d",&v);
	for(i=0;i<n;i++){
		if(a[i]==v){
			for(j=i;j<n;j++)a[j]=a[j+1];
			n--;
		}
	}
	for(i=0;i<n;i++)printf("%3d  ",a[i]);  */
	
}
