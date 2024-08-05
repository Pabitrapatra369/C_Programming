#include<stdio.h>
int main(){
	int r,c,n;
	printf("Enter the value of n:");scanf("%d",&n);
//int a,b;
//              1
//           2  3  2
//        3  4  5  4  3
//     4  5  6  7  6  5  4
//  5  6  7  8  9  8  7  6  5
/*	for(r=1;r<=n;r++){
		
		for(c=1;c<=n-r;c++)printf("   ");
		for(a=r,c=1;c<=r;c++)printf("%3d",a++);
		for(b=2*r-2,c=r-1;c>=1;c--)printf("%3d",b--);
		printf("\n");
	} */
//                    7
//                 8  9  8
//              9 10 11 10  9
//          10 11 12 13 12 11 10
//       11 12 13 14 15 14 13 12 11
//    12 13 14 15 16 17 16 15 14 13 12
// 13 14 15 16 17 18 19 18 17 16 15 14 13
/*	int a,b;
	for(r=1;r<=n;r++){
		for(c=1;c<=n-r;c++)printf("   ");
		for(a=r+n-1,c=1;c<=r;c++)printf("%3d",a++);
		for(b=(n-2)+2*r-1,c=1;c<r;c++)printf("%3d",b--);
		printf("\n");
	}   */
//  1
//  3  2
//  4  5  6
// 10  9  8  7
// 11 12 13 14 15   snake pattern
/*	int a=1;
	for(r=1;r<=n;r++){
		int b=r*(r+1)/2;
		for(c=1;c<=r;c++){
			if(r%2==0){
				printf("%3d",b--);
				a++;
			}
			else printf("%3d",a++);
		}
		printf("\n");
	}  */
//  1
//  2  3
//  4  A  5
//  6  B  C  7
//  8  9 10 11 12
/*	int a=1;
	int b=65;
	for(r=1;r<=n;r++){
		
		for(c=1;c<=r;c++){
			if(c==1||c==r||r==n)printf("%3d",a++);
			else printf("%3c",b++);
		}
		printf("\n");
	}   */
//     *
//    **
//   ***
//  ****
// *****
/*	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf(" ");
		for(c=1;c<=r;c++)printf("*");
		printf("\n");
	}  */
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
/*	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf(" ");
		for(c=1;c<=r;c++)printf("* ");
		printf("\n");
	}   */
//     *
//    ***
//   *****
//  *******
// *********	
/*	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf(" ");
		for(c=1;c<=2*r-1;c++)printf("*");
		printf("\n");
	}  */
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
/*	
	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf(" ");
		for(c=1;c<=2*r-1;c++)printf("*");
		printf("\n");
	}
	for(r=1;r<=n;r++){
		for(c=1;c<=r+1;c++)printf(" ");
		for(c=1;c<=(n-r)*2-1;c++)printf("*");
		printf("\n");
	}   */
	
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
/*	for(r=1;r<=n;r++){
		for(c=1;c<=n-r+1;c++)printf(" ");
		for(c=1;c<=2*r-1;c++){
			if(c==1||c==2*r-1) printf("*");
			else printf(" ");
		}
		
		printf("\n");
	}
	for(r=1;r<=n;r++){
		for(c=1;c<=r+1;c++)printf(" ");
		for(c=1;c<=(n-r)*2-1;c++){
			if(c==1||c==(n-r)*2-1)printf("*");
			else printf(" ");
		}
		printf("\n");
	} 
	*/
//pascal Triangle
// 	    1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
/*    int a;
	for(r=0;r<n;r++){
		for(c=1;c<n-r;c++)printf(" ");
		for(c=0;c<=r;c++){
			if(c==0||c==r)a=1;
			else a=a*(r-c+1)/c;
			printf("%2d",a);
			
		}
		printf("\n");
	}
		*/
//A
//A B
//A B C
//A B C D
//A B C D E
//A B C D
//A B C
//A B
//A
/*	int a;
	for(r=1;r<=n;r++){
		for(a=65,c=1;c<=r;c++)printf("%c ",a++);
		printf("\n");
	}
	for(r=1;r<n;r++){
		for(a=65,c=1;c<=n-r;c++)printf("%c ",a++);
		printf("\n");
	}  */
}
