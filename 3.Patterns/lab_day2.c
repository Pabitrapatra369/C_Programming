#include<stdio.h>
int  main(){
	int r,c,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
/*	int a=1;
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++)printf("%d ",a++);
		printf("\n");
	}*/
//1
//2 3
//3 4 5
//4 5 6 7
//5 6 7 8 9
/*	for(r=1;r<=n;r++){
		int a;
		for(a=r,c=1;c<=r;c++)printf("%d ",a++);
		printf("\n");
	} */
//1
//1 2
//3 5 8
//13 21 34 55
/*	int sum=0,first=0,second=1;
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			sum=first+second;
			printf("%d ",sum);
			second=first;
			first=sum;
			
		}
		printf("\n");
	} */
//0
//10
//010
//1010
//01010
/*	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			if((r+c)%2)	printf("1");else printf("0");
		}
		printf("\n");
	} */
//0
//0 1
//0 1 1
//0 1 1 2
//0 1 1 2 3
//0 1 1 2 3 5
//0 1 1 2 3 5 8       
/*		for(r=1;r<=n;r++){
		int sum=0,first=0,second=1;	
		for(c=1;c<=r;c++){
			printf("%d ",sum);
			sum=first+second;
			second=first;
			first=sum;
		}
		printf("\n");
	} */
//0
//01
//010
//0101
//01010
/*		for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
		   if(c%2)printf("0");else printf("1");
		}
		printf("\n");
	}  */
//A
//B A
//C B A
//D C B A
//E D C B A	
/*		for(r=1;r<=n;r++){
		int a;
		for(a=r,c=1;c<=r;c++){
	      printf("%c ",64+a--);
		}
		printf("\n");
	}  */
//1
//2 11
//3 12 20
//4 13 21 28
//5 14 22 29 35
//6 15 23 30 36 41
//7 16 24 31 37 42 46
//8 17 25 32 38 43 47 50
//9 18 26 33 39 44 48 51 53
//10 19 27 34 40 45 49 52 54 55
/*	for(r=1;r<=n;r++){
		int a,b=n-1;
		for(a=r,c=1;c<=r;c++){
	      printf("%d ",a);
	      a=a+b--;
		}
		printf("\n");
	} 
 */
	
}

