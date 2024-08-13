#include<stdio.h>
#include<limits.h>
int main(){
//find odd number of times occurring element
/*	int a[100],b[100],i,j,n,c=0;
	puts("Enter size of array (should be odd number):");
	scanf("%d",&n);
	puts("Enter the elements of array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		if(b[i]!=-1){
			for(c=1,j=i+1;j<n;j++){
			if(a[i]==a[j]){
				c++;
				b[j]=-1;
			}
		}
		b[i]=c;
		}
	    
	}
	for(i=0;i<n;i++){
		if(b[i]==-1)continue;
		else if(b[i]%2!=0)printf("%d occuring %d number of time",a[i],b[i]);
		else continue;
	}   */
//Find the smallest positive number missing from an unsorted array
/*	int a[100],b[100],i,j,n,c=0,min=INT_MAX;
	puts("Enter size of array (should be odd number):");
	scanf("%d",&n);
	puts("Enter the elements of array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
	}
	int k=0;
	for(i=0;i<n-1;i++){
		
		if(a[i]<=0){
			k++;
			continue;
		}
		else if(a[i]>0){
			if(a[k]!=1){
				printf("1 is missing");
				return;
			}
			if(a[i+1]-a[i]==1)continue;
		    else {
		    	printf("%d is missing",a[i]+1);
				return;
			}
		}
		else printf("nothing is missing");
		
	}   */
	
//Check if pair with given Sum exists in Sorted Array (Two Sum) - can’t use nested loop
/*	int a[100],b[100],i,j,n,s;
	puts("Enter size of array (should be odd number):");
	scanf("%d",&n);
	puts("Enter the elements of array:");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	printf("Enter the given sum");
	scanf("%d",&s);
	for(j=n-1,i=0;i<=j;){
		if(a[i]+a[j]==s){
			printf("(%d,%d)",a[i],a[j]);
			i++;
			j--;
		}
		else if(a[i]+a[j]>s)j--;
		else i++;  
		
	}    */
	
}
