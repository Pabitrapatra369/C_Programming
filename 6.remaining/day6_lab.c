#include<stdio.h>
int isPrime(int n){
	int i,f=1;
	if(n==1||n==0)return 0;
	for(i=2;i<=n/2;i++)if(n%i==0)return 0;
	return 1;
}
void primeStr(char s[100]){
	int i;
	//puts(s);
	for(i=0;s[i];i++){
		if(isPrime(i))
		printf("%c",s[i]);
	}
}
int isVowel(char c){
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return 1;
	else return 0;
}
void reverseVowels(char s[100]){
	int i,j,len,k;
	for(i=0;s[i];i++);len=i;
	for(i=0,j=len-1;i<j;){
		if(isVowel(s[i])&&isVowel(s[j])){
			s[i]=s[i]+s[j];
			s[j]=s[i]-s[j];
			s[i]=s[i]-s[j];
			i++;
			j--;
		}
		else if(isVowel(s[i])==1&&isVowel(s[j])==0)j--;
		else if(isVowel(s[i])==0&&isVowel(s[j])==1)i++;
		else {
			i++;
			j--;
		}
	}
	puts(s);
	
}
void reverseWords(char s[100]){
	int i,j,k,l,len,strlen;
	//puts(s);
	for(i=0;s[i];i++);strlen=i;
	for(i=0;s[i];){
				//printf("%d",i);
		for(j=i;s[j]!=' ';j++);len=j;
				//printf("-%d\n",len);
		if(len>strlen)len=strlen;
		for(k=i,l=len-1;k<l;k++,l--){
			//printf("%d %d",k,l);
			s[k]=s[k]+s[l];
			s[l]=s[k]-s[l];
			s[k]=s[k]-s[l];
		}
		i=j+1;
	}
	puts(s);
}
void removeChar(char s1[100],char s2[100]){
	int i,j,k;
	for(i=0;s1[i];i++){
		for(j=0;s2[j];j++){
			if(s1[i]==s2[j]){
				for(k=j;s2[k];k++)s2[k]=s2[k+1];
				j--;
			}
		}
	}
	puts(s2);
}
int main(){
//	char s[100];
//	puts("enter a String.");gets(s);
	//primeStr(s);
	//reverseVowels(s);
	//reverseWords(s);
//C Program to Remove Characters in Second String which are present in First String.
	char s1[100],s2[100];
	puts("enter the first string");gets(s1);
	puts("enter the second string");gets(s2);
	removeChar(s1,s2);
}
