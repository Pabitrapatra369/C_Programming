#include<stdio.h>
int main(){
//Write a program in C for a 2D array of size 3x3 read the element  and print the matrix.
/*	int  a[10][10],i,j;
	printf("Enter elements in the matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("element - [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	puts("The matrix is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		
		}
		printf("\n");
	}		*/
	
//Write a program in C for addition of two Matrices of same size. Test Data : 
/*	int  a[10][10],b[10][10],i,j;
	printf("Enter elements in the first matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}printf("Enter elements in the second matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	puts("The first matrix is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	puts("The second matrix is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	puts("The matrix sum is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}		*/
//subtraction of two matrix
/*  int  a[10][10],b[10][10],i,j;
	printf("Enter elements in the first matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}printf("Enter elements in the second matrix ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&b[i][j]);
		}
	}
	puts("The first matrix is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	puts("The second matrix is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	puts("The matrix sum is:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",a[i][j]-b[i][j]);
		}
		printf("\n");
	}   */
	
//Multiplication of two matrix
	int  a[10][10],b[10][10],i,j,k,n,m,o,p;
	puts("Enter the row and column of first matrix:");
	scanf("%d%d",&n,&m);
	printf("Enter elements in the first matrix \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}printf("Enter elements in the second matrix \n");
	puts("Enter the row and column of first matrix:");
	scanf("%d%d",&o,&p);
	for(i=0;i<o;i++){
		for(j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	puts("The first matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	puts("The second matrix is:");
	for(i=0;i<o;i++){
		for(j=0;j<p;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	puts("The multiplicaiton of two matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			int sum;
			for(sum=0,k=0;k<o;k++){
				sum+=a[i][k]*b[k][j];
			}
			printf("%d  ",sum);
		}
		printf("\n");
	}
	
}
