#include<stdio.h>
void printSquare(){
	float n;
	puts("Enter the a number:");scanf("%f",&n);
	printf("sqaure is %.2f",n*n);
}
void swapNumber01(){
	int a,b;
	puts("Enter the 1st number:");scanf("%d",&a);
	puts("Enter the 2nd number:");scanf("%d",&b);
	
	printf("Before swapping: n1=%d , n2=%d\n",a,b);
	int temp=a;
	a=b;
	b=temp;
	printf("After swapping: n1=%d , n2=%d",a,b);
	
}
void swapNumber02(){
	int a,b;
	puts("Enter the 1st number:");scanf("%d",&a);
	puts("Enter the 2nd number:");scanf("%d",&b);
	
	printf("Before swapping: n1=%d , n2=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping: n1=%d , n2=%d",a,b);
	
}
void FindEvenAndOdd(){
	int n;
	puts("Enter the a number:");scanf("%d",&n);
	if(n%2)puts("The entered number is odd");
	else puts ("The entered number is even");
	
}
void FindPrime(){
	int n,i,f=0;
	puts("Enter the a number:");scanf("%d",&n);
	for(i=2;i<n/2;i++)if(n%i==0)f=1;
	if(f==0)puts("the number is prime");
	else puts("The number is not a prime");
	
}
void fact(int x){
	int i,j,s=0;
	for(i=1;i<=x;i++){
		int f;
		for(f=1,j=i;j>=1;j--)f*=j;
		s+=f/i;
	}
	printf("The sum of the series is: %d",s);
	
}
void FindLargest(int a,int b,int c){
//	if(a>b&&a>c)printf("a is big ");
//	else if(b>a&&b>c)printf("B is big");
//	else printf("C is big");
	a>b&&a>c ?puts("a is big"):b>a&&b>c?puts("b is big"):puts("C is big");
	
}
int main(){
	//printSquare();
	//swapNumber01();
	//swapNumber02();
	//FindEvenAndOdd();
	//FindPrime();
	fact(5);
	//FindLargest(1,10,2);
	

}
