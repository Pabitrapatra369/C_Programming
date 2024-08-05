#include<stdio.h>
int main(){
	int r,c,n,m;
	printf("Enter the value of row and colum:");
	scanf("%d %d",&n,&m);
// 1 2 3
// 6 5 4
// 7 8 9
//121110
//131415
	int a=1;
	for(r=1;r<=n;r++){
		int b;
		for(b=a+m-1,c=1;c<=m;c++){
			if(r%2)printf("%3d",a++);
			else printf("%3d",b--,a++);
			
		}
		printf("\n");
	}  
//  1
//  2  6
//  3  7 10
//  4  8 11 13
//  5  9 12 14 15
/*	for(r=1;r<=n;r++){
		int a;
		for(a=c,c=1;c<=r;c++){
			printf("%3d",a);
			a+=n-c;
		}
		printf("\n");
	}      */
//                       1
//                   4   9
//              16  25  36
//          49  64  81 100
//     121 144 169 196 225                
/*	int a=0;
	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf("    ");
		for(c=1;c<=r;c++)printf("%4d",a*a,a++);
		printf("\n");
	}   */
//              1
//           2  4
//        3  6  9
//     4  8 12 16	
/*	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf("   ");
		for(c=1;c<=r;c++)printf("%3d",r*c);
		printf("\n");
	}   */
//	     1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1
/*	for(r=1;r<=n;r++){
		for(c=1;c<=n-r;c++)printf("  ");
		int a=1;
		for(c=1;c<=r;c++)printf("%2d",a++);
		int b;
		for(b=r-1,c=1;c<=r-1;c++)printf("%2d",b--);
		printf("\n");
	}  */
	
}
