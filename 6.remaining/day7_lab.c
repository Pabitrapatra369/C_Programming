#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<string.h>
void swapArray(int a[],int b[],int n){
	int i,j;
	for(i=0;i<n;i++){
		a[i]=a[i]+b[i];
		b[i]=a[i]-b[i];
		a[i]=a[i]-b[i];
	}
	printf("After swapping :\n");
	printf("1st array :");
	for(i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
	printf("2nd array :");
	for(i=0;i<n;i++)printf("%d ",b[i]);
}
int isArmstrong(int a){
	int i,j,c=0,sum=0,d,n=a;
	//counting the digits
	while(n){
		c++;
		n/=10;
	}
	//cheking the armstrong number
	j=a;
	while(j){
		d=j%10;
	    sum+=pow(d,c);
	    j/=10;
	}
	if(a==sum)return 1;
	else return 0;
}
void largestEleInArray(){
	int n,i,max=INT_MIN;
	int a[100];
	puts("Enter the array size");
	scanf("%d",&n);
	puts("Enter elements");
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=a[0];i<n;i++){
		if(a[i]>max)max=a[i];
	}
	printf("The largest elements is : %d",max);
}
int amicable(int n){
	int i,j,sum=0,amicsum=0;
	for(i=1;i<=n/2;i++){
		if(n%i==0)sum+=i;
	}
	for(j=1;j<=sum/2;j++){
		if(sum%j==0)amicsum+=j;
	}
	if(sum==amicsum)return 0;
	if(n==amicsum)return sum;
	else return 0;

}
void accDetail(char n[],int ag,char gen,int id,long int adhar,long int mob,long int amount){
	printf("\nAccount Detail\n");
	puts("---------------------");
	printf("Name:%s\n",n);
	printf("age:%d\tgender:%c\tId:%d\n",ag,gen,id);
	printf("Adhar:%ld\tMobile:%ld\n",adhar,mob);
	printf("Amount:%ld\n",amount);
	main();
}
int createAC(){
	char name[20];
	int age,id;
	char gen;
	long int adhar,mob,amount;
	puts("Enter your name:");scanf("%s",&name);
	puts("Enter age, gender and id:");
	scanf("%d %c %d",&age,&gen,&id);
	puts("Enter Adhar and Mobile Number:");
	scanf("%ld %ld",&adhar,&mob);
	puts("Enter the amout initialy you want to deposite");
	scanf("%ld",&amount);
	accDetail(name,age,gen,id,adhar,mob,amount);
	return amount;
}
void DepostieMon(){
	
}
void withdrawMon(){
}
void checkBal(){
}

void main(){
//Program to swap all elements of two integer arrays using user define function in C.
//	int a[100],b[100];
//	int i,j,n;
//	puts("Enter the array size :");scanf("%d",&n);
//	printf("Enter %d elements for the 1st array:",n);
//	for(i=0;i<n;i++)scanf("%d",&a[i]);
//	printf("Enter %d elements for the 2nd array:",n);
//	for(i=0;i<n;i++)scanf("%d",&b[i]);
//	swapArray(a,b,n);
//write a C program to find all the Armstrong number in beetween 100 to 10000
//	int s,e;
//	printf("Enter starting number");
//	scanf("%d",&s);
//	printf("Enter ending number");
//	scanf("%d",&e);
//	//printf("%d ",isArmstrong(370));
//	int i,j;
//	for(i=s;i<=e;i++){
//		if(isArmstrong(i)==1)printf("%d\n",i);
//	}
//largest element in an array
	//largestEleInArray();
//Bank Management system

// 	char ch;
// 	int amount;
// 	
// 	puts("Enter the operation which you want to perform");
// 	printf("1.create Account\n2.deposite money\n3.withdraw monye\n4.check balance\n5.exit\n:-");
// 	scanf("%c",&ch);
// 	switch(ch){
// 		case '1':createAC();
// 		break;
// 		case '2':DepostieMon();
// 		break;
// 		case '3':withdrawMon();
// 		break;
// 		case '4':checkBal();
// 		break;
// 		case '5':return 0;
//		break;
// 		default:printf("invalid intput");
//	 }
//give the amicable numbers in the range 
	int start,end,i;
	printf( "Enter the starting and ending position:");
	scanf("%d %d",&start,&end);
	for(i=start;i<=end;i++){
		if(amicable(i))printf("(%d, %d)\n",i,amicable(i));
	}
}
