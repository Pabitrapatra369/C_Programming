#include<stdio.h>
int main(){    
	int a[5]={23,1,10,5,2},i,j,key;
	int n=5;
	
	for(i=0;i<n;i++){
		key=i;
		if(a[0]>a[1]){
			int temp=a[0];
			a[0]=a[1];
			a[1]=temp;
		
		}
		for(j=0;j<=key;j++){
			
		}
	}
	for(i=0;i<n;i++)printf("%d    ",a[i]);
}
