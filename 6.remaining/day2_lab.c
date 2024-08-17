#include<stdio.h>
#include<math.h>
int cheackPerfect(int n){
	int i,s=0;
	for(i=1;i<n;i++){
		if(n%i==0)s+=i;
	}
	return s;
}
void sunnyNum(){
	int n;
	puts("Enter the value of n");
	scanf("%d",&n);
	int m=n+1;
	int k=sqrt(m);
	if(m==k*k)printf("it is a sunny Number");
	else printf("not a sunny number");
}
void length(char str[]){
	int i;
	for(i=0;str[i];i++);
	printf("The length of the string is : %d",i);
	
}
void cheackAnagram(char s1[100],char s2[100]){
	
	int i,j,c=0;
	int s1len,s2len;
	for(i=0;i<s1[i];i++);s1len=i; 
	for(i=0;i<s2[i];i++);s2len=i;
	
//	printf("%d\n",s1len);
//	printf("%d",s2len);
if(s1len==s2len){
	for(i=0;s1[i];i++){
		for(j=0;s2[j];j++){
			if(s1[i]==s2[j]){
				c++;
				s2[j]='@';
				continue;
			}
		}
		
	}
	printf("%d\n",c);
	printf("%d\n",s1len);
//	if(s1len==c)printf("this is a annagram");
//	else printf("not a anngram");
}
else printf("not a anngram");
}
void reverseStr(char s[]){
	int i,j,len;
	for(i=0;s[i];i++);len=i;
	//printf("%d",len);
	for(i=0,j=len-1;i<len/2;i++,j--){
		s[i]=s[i]+s[j];
		s[j]=s[i]-s[j];
		s[i]=s[i]-s[j];
	}
	puts(s);
}
int main(){
//Write a program in C to print all perfect numbers in a given range using the function.
/*	int n,i,j;
	//printf("%d",cheackPerfect(12));
	puts("Enter the range  value");
	scanf("%d",&n);
	printf("The perfect numbers between 1 to %d are:",n);
	for(i=1;i<=n;i++){
		
		if(cheackPerfect(i)==i)printf("%d  ",i);
	}     */
	
//sunny number or not	
//	sunnyNum();
//find lenght of the string
//	char ch[100];
//	puts("Enter a string");
//	gets(ch);
//	length(ch);
//check two  words are anagram or not
	char s1[100],s2[100];
	puts("Enter first string:");gets(s1);
	puts("Enter second string:");gets(s2);
	cheackAnagram(s1,s2);
//reverse the string
//	char s[100];
//	puts("Enter a string");gets(s);
//	reverseStr(s);
}
