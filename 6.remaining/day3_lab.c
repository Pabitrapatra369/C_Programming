#include<stdio.h>
int isPalindrome(char s[]){
	int i,j,len ,f=1;
	for(i=0;s[i];i++);len=i;
	for(i=0,j=len-1;i<len/2;i++,j--){
		if(tolower(s[i])==tolower(s[j]));
		else f=0;
	}
	return f;
	
}
void chafrequency(){
	char s[100];
	int count[100]={0};
	int i,j,len,c=0;
	puts("Enter a string:");gets(s);
	//puts(s1);
	for(i=0;s[i];i++);len=i;
	for(i=0;s[i];i++){
//		if(s[i]=='@'){
//			for(c=1,j=i+1;s[j]!='\0';j++)if(s[i]==s[j])c++;
//			printf("%c found %d times\n",s[i],c); 
//			break;
//		}
		if(s[i]!='@'){
			for(c=1,j=i+1;s[j]!='\0';j++){
				if(s[i]==s[j]){
					c++;
					s[j]='@';
				}
			}
			if(s[i]==' ')printf("%c found %d times ----- THIS IS FOR CHECKING THE SPACE COUNT\n",s[i],c);
		    else printf("%c found %d times\n",s[i],c);
		}
	}
	
}
void strSortasc(){
	char s[100];
	puts("Enter a string:");gets(s);
	int i,j;
	for(i=0;s[i];i++){
		for(j=i+1;s[j];j++){
			if(s[i]>s[j]){
				s[i]=s[i]+s[j];
				s[j]=s[i]-s[j];
				s[i]=s[i]-s[j];
			}
		}
	}
	puts("After sorting string in descending order:");
	puts(s);
}
void strSortdsc(){
	char s[100];
	puts("Enter a string:");gets(s);
	int i,j;
	for(i=0;s[i];i++){
		for(j=i+1;s[j];j++){
			if(s[i]<s[j]){
				s[i]=s[i]+s[j];
				s[j]=s[i]-s[j];
				s[i]=s[i]-s[j];
			}
		}
	}
	puts("After sorting in  descending order");
	puts(s);
}
int main(){
//string is palindrome or not
//	char s[100];
//	puts("Enter a string:");gets(s);
//	if(isPalindrome(s))puts("this is a palindrome.");
//	else puts("not a palindrome.");
//count frequency of charecter;
	//chafrequency();
//sort the string
	//strSortasc();
    //strSortdsc();

}
