#include<stdio.h>
#include<string.h>
int isPalindrome(char s[100]){
	int len=strlen(s);
	int st,e;
	st=0,e=len-1;
	while(st<e){
		if(s[st]!=s[e])return 0;
		st++;e--;
	}
	return 1;
}
int  Arrsum(int arr[],int n){
	int sum=0,i;
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	
	return sum;
}
int isAnagram(char s1[],char s2[]){
	int i,j,c=0,len;
	for(i=0;s1[i];i++);len=i;
	for(i=0;s1[i];i++){
		for(j=0;s2[j];j++){
			if(s1[i]==s2[j]){
				c++;
				s1[i]=-1;
			}
		}
	}
	if(len==c)return 1;
	return 0;
	
}
int isDigit(char s){
	if(s>='0'&&s<='9')return 1;
	else return 0;
}
int main(){
//chacking the string is palindrome or not
//	char s[100];
//	puts("Enter a string :");gets(s);
//	isPalindrome(s)==1?printf("The string is a palindrome"):
//	printf("The string is not a palindrome");
//Sum of all elements
//	int arr[100],i,n;
//	puts("enter the  size of the array");scanf("%d",&n);
//	puts("Enter the elements of the array :");
//	for(i=0;i<n;i++)scanf("%d",&arr[i]);
//	printf("Sum of all elements in the array : %d",Arrsum(arr,n));
//checking for anagram
//	char s1[100],s2[100];
//	puts("Enter 1st string :");gets(s1);
//	puts("Enter 2nd string :");gets(s2);
//	isAnagram(s1,s2)==1?printf("The string is a anagram"):
//	printf("The string is not a anagram");
//checking the string is pure digits or mix of chars
	char s[100];
	int i;
	puts("Enter the string :");gets(s);

	for(i=0;s[i];i++){
		if(isDigit(s[i])==0){
			printf("The string contains non-digit characters. ");
			return ;
		}
	}
	printf("The string contains only digits.");
}
