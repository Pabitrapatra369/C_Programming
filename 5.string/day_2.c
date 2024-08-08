#include<stdio.h>
int main(){
//printing the string
/*	char s[100],i;
	puts("Enter a string:");
	scanf("%s",s);
	for(i=0;s[i];i++);//finding the lenght of string
	for(;i>0;i--,s[i]='\0'){
	printf("%s",s);
	printf("\n");
    }  */
//Finding string length and reverse string using user defined program:
/*    char s[100],i;
    puts("Enter the string :");
    scanf("%s",s);
    for(i=0;s[i];i++);
    puts("length=%d",i);
    puts("reverse is ");
    while(i)printf("%c",s[--i]);  */
    
//Scan set / magic characters:
/*	char s[100];
	int i,j;
	//puts("Enter a string ");gets(s);
	//printf("Enter a string ");scanf("%[^\n]",s);
	//printf("Enter a string ");scanf("%[^.]",s);
	//printf("Enter a string ");scanf("%[^@#$]",s);
	//printf("Enter a string ");scanf("%[0-9 A-Z]",s);
	
	puts("The string is ");puts(s);
	*/
//Finding the no of alphabets, digits, spaces, special characters in given string
/*	char s[100];
	int i,j,a,d,spe,spa;
	puts("Enter a string ");gets(s);
	for(a=d=spe=spa=i=0;s[i];i++){
		if(s[i]>='0'&&s[i]<='9')d++;
		else if(s[i]>='a'&&s[i]<='z' ||s[i]>='A'&&s[i]<='Z')a++;
		else if(s[i]==' ')spa++;
		else spe++;
		
	}
    printf("Alphabets=%d, Digits=%d, Spaces=%d, Special=%d",a,d,spa,spe);  */
    
//Finding palindrome or not using single string
/*	char s[100];
	int i,j,a,d,spe,spa;
	puts("Enter a string ");gets(s);
	for(i=0;s[i];i++);
	for(j=0;j<i/2;j++){
		if(tolower(s[j])!=tolower(s[i-j-1])){
			puts("Not a Palindrome");
			return;
		}
	}
	printf("Palindrome"); */
//Finding no of words in given string
/*	char s[100];
	int i,spa=0;
	puts("Enter a string ");gets(s);
	for(i=0;s[i];i++){
		if(s[i]==' ')spa++;
	}
	printf("The number of words=%d",spa+1);  */
	
//Finding palindrome using 2 strings
/*	char s1[10],s2[10];
	int i,j;
	puts("Enter a string:");gets(s1);
	for(i=0;s1[i];i++);
	for(j=0,s1[i--]='\0';i>=0;i--,j++)
		s2[j]=s1[i];
	for(i=0;s1[i];i++){
		if(tolower(s1[i])!=tolower(s2[i])){printf("not a palindrome");
		return;
	}
	}
	printf("palindrome");
	*/

}
