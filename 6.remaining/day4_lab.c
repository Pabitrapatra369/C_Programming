#include<stdio.h>
void concatStr(char s1[100],char s2[100]){
	int i,j,len;
	for(i=0;s1[i];i++);
	for(j=0;s2[j];i++,j++){
		s1[i+1]=s1[i];
		s1[i]=s2[j];
	}
	//s1[j]='\0';
	puts(s1);
}
void removeChar(char s[],char c){
	int  i,j,n;
	for(i=0;s[i];i++){
		if(s[i]==c){
			for(j=i;s[j];j++){
				s[j]=s[j+1];
			}
			s[j]='\0';i--;
		}
	}
	printf("Resulting String is : %s",s);
}
void removeSpace(char s[]){
	int  i,j,n;
	for(i=0;s[i];i++){
		if(s[i]==' '){
			for(j=i;s[j];j++){
				s[j]=s[j+1];
			}
			s[j]='\0';i--;
		}
	}
	printf("Resulting String is : %s",s);
}
int upperCaseIndex(char s[],int x,int y){
	int i,j,len;
	for(i=0;s[i];i++);len=i;
	if(y>len||x<0){
		puts("Invalid index.");
		return;
	}
	else{
		for(i=x;i<=y;i++){
			if(s[i]<'z'&&s[i]>'a'){
				s[i]-=32;
			}
		}
		puts(s);
	}
}
int checkStr(char s[]){
	int c=0,sm=0,sp=0,d=0,i,k=0;
	for(i=0;s[i];i++){
		if(s[i]>'!' &&s[i]<'/' || s[i]== '@' )sp=1;
		else if(s[i]>'A'&&s[i]<'Z')c=1;
		else if(s[i]>'a'&&s[i]<'z')sm=1;
		else if(s[i]>'0'&&s[i]<'9')d=1;
		else;
	}
	if(sp&&c&&sm&&d)k=1;
	return k;
}
int main(){
// 	for concating two string 
//	char s1[100],s2[100];
//	puts("Enter first string:");gets(s1);
//	puts("Enter second string:");gets(s2);
//	concatStr(s1,s2);
//Remove given charecter from a String.
//	char c,s[100];
//	puts("Enter a string");gets(s);
//	puts("Enter a charecter:");scanf("%c",&c);
//	removeChar(s,c);
//Remove all the Spaces from a given string.
//	char s[100];
//	puts("Enter a string");gets(s);
//	removeSpace(s);
//Convert to uppercase from given index to given index
//	char s[100];
//	int i,j;
//	puts("Enter a string");gets(s);
//	puts("Enter the starting index number:");
//	scanf("%d",&i);
//	puts("Enter the ending index number:");
//	scanf("%d",&j);
//	upperCaseIndex(s,i,j);
//given string contains a capital alphabet, small alphabet, special character and digit.
//	char s[100];
//	puts("Enter a string");gets(s);
//	int k=checkStr(s);
//	if(k)puts("The given String is matching to our cases.");
//	else puts("The given String is not matching to our cases.");
}
