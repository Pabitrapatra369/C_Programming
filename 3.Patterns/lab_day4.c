#include<stdio.h>
int main(){
	int r,c,n;
	puts("enter the number of rows:");
	scanf("%d",&n);
//12345
//03456
//00567
//00078
//00009
/*	for(r=1;r<=n;r++){
		for(c=1;c<=r-1;c++)printf("0");
		int a;
		for(a=2*r-1,c=1;c<=n-r+1;c++)printf("%d",a++);
		printf("\n");
	}  */
//1
//1*2
//1*2*3
//1*2*3*4
//1*2*3*4*5	
/*	for(r=1;r<=n;r++){
		int a=1;
		for(c=1;c<=2*r-1;c++){
			if(c%2)printf("%d",a++);
			else printf("*");
		}
		printf("\n");
	}   */
//  1
//  2  3
//  4  5  6
//  7  8  9 10
// 11 12 13 14 15
// 16 17 18 19
// 20 21 22
// 23 24
// 25
/*	int a=1;
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++)printf("%3d",a++);
		printf("\n");
	}
	for(r=1;r<=n-1;r++){
		for(c=1;c<=n-r;c++)printf("%3d",a++);
		printf("\n");
	}  */
// 1 2 3 4 5
// 2 3 4 5 1
// 3 4 5 1 2
// 4 5 1 2 3
// 5 1 2 3 4
/*	for(r=1;r<=n;r++){
		int a;
		for(a=r,c=1;c<=n-r+1;c++)printf("%2d",a++);
		int b;
		for(b=1,c=1;c<=r-1;c++)printf("%2d",b++);
		printf("\n");
	}   */
	

}
