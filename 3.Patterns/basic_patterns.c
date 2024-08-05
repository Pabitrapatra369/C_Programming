#include<stdio.h>
int main(){
	int r,c,n;
	printf("enter the number of rows");scanf("%d",&n);
//  1  2  3  4
//  1  2  3  4
//  1  2  3  4
//  1  2  3  4

/*	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("%3d",j);
		}
		printf("\n");
	} */
//  1  1  1  1
//  2  2  2  2
//  3  3  3  3
//  4  4  4  4
/*	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			printf("%3d",i);
		}
		printf("\n");
	} */
//  1  2  3  4
//  2  3  4  5
//  3  4  5  6
//  4  5  6  7
/*	int a;
	for(i=1;i<=r;i++){
		for(a=i,j=1;j<=c;j++){
			printf("%3d",a++);
		}
		printf("\n");
	}*/
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
/*	int a;
	for(i=1;i<=r;i++){
		for(a=j,j=1;j<=c;j++){
			if(r%2)printf("%2d",j);
			else printf("%2d",a--);
		}
		printf("\n");
	} */
//12222
//01222
//00122
//00012
//00001
 /*   for(r=1;r<=n;r++){
    	for(c=1;c<=n;c++){
    		if(c>r)printf("2");
    		else if(c<r)printf("0");
    		else printf("1");
		}
		printf("\n");
	} */
//1111
//1122
//1333
//4444
/*	for(r=1;r<=n;r++){
		for(c=1;c<=n-r;c++)printf("1");
		for(c=1;c<=r;c++)printf("%d",r);
		printf("\n");
	} */
//1234
//123
//12
//1
/*
	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf("%d",c);
		printf("\n");
	} */
//4321
//321
//21
//1
/*	int a;
	for(r=1;r<=n;r++){
		for(a=n-r+1,c=1;c<=n-r+1;c++){
			printf("%d",a--);
		}
		printf("\n");
	}
*/
//*
//**
//***
//****
/*    for(r=1;r<=n;r++){
    	for(c=1;c<=r;c++){
    		printf("*");
		}
		printf("\n");
	} */
//1
//2 3
//4 5 6
//7 8 9 10
/*	int a=1;
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++)printf("%d ",a++);
		printf("\n");
	}  */
//10
//9 8
//7 6 5
//4 3 2 1
/*	int a=n*(n+1)/2;
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++)printf("%d ",a--);
		printf("\n");
	}  */
//1
//3  2
//4  5  6
//10 9  8  7
/*	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++)printf("")
	} */
	
	for(r=1;r<=n;r++){
		for(c=1;c=r;c++){
			if()
		}
	}
	
	return 0;
}
