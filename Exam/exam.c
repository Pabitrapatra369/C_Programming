#include<stdio.h>
int main()
{
	char s[100];
	puts("Enter a string:");gets(s);
	int i,j,k,c,len;
	for(i=0;s[i];i++);len=i;
	for(i=0;i<s[ih];i++){
		for(c=1,j=i+1;j<s[j];j++){
			if(s[i]==s[j]){
				c++;
				for(k=i;k<len;k++){
					s[i]=s[i+1];
					
				}
				
			}
			
		}
		printf("%c found %d times\n",s[i],c);
	}
	puts(s);
}
