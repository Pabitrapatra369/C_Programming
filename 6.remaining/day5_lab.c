#include<stdio.h>
void compressStr(char s[100]){
	int i,j,c,f;
	for(i=0;s[i];i++){
		//printf("\n%c",s[i]);
		if(s[i]!='`'){
			for(c=1,j=i+1;s[j];j++)if(s[i]==s[j]){
			c++;
			s[j]='`';
		}
		printf("%c%d",s[i],c);
		}
		
	}
}
int checkPali(char s[100]){
    int i,j,k,flag=1;
    for(i=0;s[i];i++);k=i;
    for(i=0,j=k-1;i<=k/2;i++,j--){
    	if(s[i]!=s[j])flag=0;
	}
	return flag;
}
int countPaliSubStr(char s[100]){
	int i,j,k,c;
	for(i=0;s[i];i++);k=i;
	for(i=0,j=k-1;i<k/2;i++,j--){
		if(checkPali(s)){
			printf("Palindromic substring : %s\n",s);
			c++;
		}
		int r,c;
		for(r=0;s[r];r++){
		    s[r]=s[r+1];	
		}
		//printf("%d",r);
		s[r-2]='\0';
		//	puts(s);
	}

	return c;
	
}
void sumOfNums(char s[100]){
	int i,j,sum=0;
	for(i=0;s[i];i++){
		if(s[i]>='0'&&s[i]<='9')sum+=s[i]-48;
	}
	printf("Sum of the number is : %d",sum);
}
void titleCase(char s[100]){
	int i,j;
	for(i=0;s[i];i++)if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
	for(i=0;s[i];i++){
		if(i==0)s[i]-=32;
		else if(s[i]==' '&&s[i+1]==' ')continue;
		else if(s[i]==' ')s[i+1]-=32;
		else;
	}
	puts(s);
}
int main(){
//compress the string
//	char s[100];
//	puts("enter a string :");gets(s);
//	compressStr(s);
//check palindrome
//	char s[100];
//	puts ("Enter a string :");gets(s);
//	checkPali(s)==1?printf("%s is a palindrome string.",s):
//		printf("%s is not a palindrome string.",s);
//Write a program to find and count all palindromic substrings in a given string.
	char s[100];
	puts ("Enter a string :");gets(s);
	int n=countPaliSubStr(s);
	printf("Total palindromic substrings are : %d",n);

	//titleCase(s);
	//sumOfNums(s);
}
