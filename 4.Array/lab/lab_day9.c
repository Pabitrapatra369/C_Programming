#include<stdio.h>
int main(){
/*	int a[10][10],i,j,n,m;
	puts("Enter the rows and columns of the matrix");
	scanf("%d%d",&n,&m);
	puts("Enter elements in  the first matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("The matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	puts("The transpose matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[j][i]);
			
		}
		printf("\n");
	}     */
//Write a program in C to find sum of right diagonals of a matrix.
/*		int a[10][10],i,j,n,m ,sum=0;
	puts("Enter the rows and columns of the matrix");
	scanf("%d%d",&n,&m);
	puts("Enter elements in  the first matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("The matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if((i+j)==n-1)sum+=a[i][j];
		}
		printf("\n");
	}
	printf("the sum of  right diagonal is:%d",sum); */
	
//Write a program in C to find the sum of left diagonals of a matrix. Test Data : 
/*		int a[10][10],i,j,n,m ,sum=0;
	puts("Enter the rows and columns of the matrix");
	scanf("%d%d",&n,&m);
	puts("Enter elements in  the first matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("The matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j)sum+=a[i][j];
		}
		printf("\n");
	}
	printf("the sum of  left diagonal is:%d",sum);  */
//Write a program in C to find sum of rows an columns of a Matrix. 
/*	int a[10][10],i,j,n,m ,sum=0;
	puts("Enter the rows and columns of the matrix");
	scanf("%d%d",&n,&m);
	puts("Enter elements in  the first matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("The matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	puts("The sum or rows and columns of the matrix is :");
	int rs,cs;
	for(i=0;i<n;i++){
		for(rs=cs=j=0;j<n;j++){
			rs+=a[i][j];
			cs+=a[j][i];
		}
		a[i][n]=rs;
		a[n][i]=cs;
	}
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if(i==n && j==n);
			else printf("%3d",a[i][j]);
		}
		printf("\n");
	}		*/
//Write a program in C to print or display the lower triangular of a given matrix. 
//1 2 3 
//0 5 6 
//0 0 9 
/*	int a[10][10],i,j,n,m ,sum=0;
	puts("Enter the rows and columns of the matrix");
	scanf("%d%d",&n,&m);
	puts("Enter elements in  the first matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("The matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	puts("Setting zero in lower triangular matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i>j)printf("0 ");
			else printf("%d ",a[i][j]);
		}
		printf("\n");
	}	*/
//Write a program in C to print or display upper triangular matrix. 
//1 0 0
//4 5 0
//7 8 9
/*	int a[10][10],i,j,n,m ,sum=0;
	puts("Enter the rows and columns of the matrix");
	scanf("%d%d",&n,&m);
	puts("Enter elements in  the first matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	puts("The matrix is:");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	puts("Setting zero in lower triangular matrix");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i<j)printf("0 ");
			else printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	*/
}
