#include<stdio.h>
int main(){
//printing the below output using a n*n matrix
  /*  int n=3;
    int a[10][10],i,j;
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		if(i>j)a[i][j]=-1;
    		else if(i==j)a[i][j]=9;
    		else a[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("%3d",a[i][j]);
		}
		printf("\n");
	}   */
//Matrix multiplication
	
	int a[10][10],b[10][10],r,c,k,i,nc,nr;
	printf("Enter the no of rows and columns: ");
	scanf("%d %d",&nr,&nc);
	printf("Enter the number of rows and colums for 1st matrix:");
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			scanf("%d",a[r][c]);
		}
	}
	printf("Enter the number of rows and colums for 2nd matrix:");
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			scanf("%d",a[r][c]);
		}
	}
	puts("first matrix");
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			printf("%2d",a[r][c]);
		}printf("\n");
	}
	puts("second matrix");
	for(r=0;r<nr;r++){
		for(c=0;c<nc;c++){
			printf("%2d",a[r][c]);
		}printf("\n");
	}
	
}
