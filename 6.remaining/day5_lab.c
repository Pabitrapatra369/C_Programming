#include<stdio.h>
void compressStr(char s[100]){
	int i,j,c,f;
	for(i=0;s[i];i++){
		//printf("\n%c",s[i]);
		for(c=1,j=i+1;s[j];j++)if(s[i]==s[j])c++;
		printf("%c%d",s[i],c);
	}
}
int main(){
	char s[100];
	puts("enter a string :");gets(s);
	compressStr(s);
}
