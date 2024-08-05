#include<stdio.h>
int main(){
//printing the array elements
/*	int a[10],i;
	printf("Enter 10 elements in the array :\n");
	for(i=0;i<10;i++){
		printf("element - %d :",i);
		scanf("%d",&a[i]);
	}
	printf("Elements in array are:");
	for(i=0;i<10;i++)printf("%2d",a[i]);  */
//reverse the array
/*	int a[100],n,i;
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    printf("nput %d number of elements in the array :\n",n);
    for(i=0;i<n;i++){
    	printf("element - %d :",i);
    	scanf("%d",&a[i]);
	}
	int  b[100];
	for(i=0;i<n;i++)b[i]=a[i];
	//for reverse the number
	for(i=0;i<n/2;i++){
		a[i]=a[i]+a[n-i-1];
		a[n-i-1]=a[i]-a[n-i-1];
		a[i]=a[i]-a[n-i-1];
	}
	printf("The values store into the array are :\n");
	for(i=0;i<n;i++)printf("%3d",b[i]);
	printf("\nThe values store into the array in reverse are :");
	for(i=0;i<n;i++)printf("%3d",a[i]); */
//Sum of all elements
/*	int a[100],n,i;
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    printf("nput %d number of elements in the array :\n",n);
    for(i=0;i<n;i++){
    	printf("element - %d :",i);
    	scanf("%d",&a[i]);
	}

	//for adding the elements
	int sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	printf("Sum of all elements stored in the array is :%d",sum);
	*/
//print odd and even elements
/*	int a[100],n,i,odd[100],even[100],o=0,e=0;
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    printf("nput %d number of elements in the array :\n",n);
    for(i=0;i<n;i++){
    	printf("element - %d :",i);
    	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2){
			odd[o]=a[i];
			o++;
		}
		else{
			even[e]=a[i];
			e++;
		} 
	}
	puts("The Even elements are:");
	for(i=0;i<e;i++)printf("%3d",even[i]);
	puts("\nThe Odd elements are:");
	for(i=0;i<o;i++)printf("%3d",odd[i]);
	*/
//Write a C program to store some integers in an array and print all the prime numbers available in that array

/*    int a[100],n,i,j,c;
    printf("Input the number of elements to store in the array :");
    scanf("%d",&n);
    printf("nput %d number of elements in the array :\n",n);
    for(i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	puts("the prime number are:");
	for(i=1;i<n;i++){
		for(c=0,j=1;j<=a[i];j++)if(a[i]%j==0)c++;
		if(c==2)printf("%3d",a[i]);
	}  */
}
