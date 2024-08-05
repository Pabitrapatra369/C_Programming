#include<stdio.h>
int main(){
//Direct initialization of array
/*	char s[100]="Naresh\tIT\nAmeerpet\0Hyd";
	puts(s);
	printf("%s\n",s);
	printf(s); */
//storing of multiple strings:
/*	char s[10][20]={"Radha","Krishna","Gopal","Gobinda","Syama"};
	int i;
	for(i=0;i<5;i++)printf("%s\n",s[i]);  */
	
//finding string address and size
/*	char s[20]="Radha Krishna";
	printf("s[0] addr=%u, s value=%u",&s[0],s);
	printf("s size=%d",sizeof(s));  */
	
//Reading and printing strings
/*	char s[100]; int i;
	printf("Enter a string");scanf("%s",s);
	for(i=0;s[i]!='\0';i++)printf("%s\n",s+i);
	*/
	char c[100]; int i;
	printf("Enter a string");scanf("%s",c);
	
	for(i=0;c[i]!='\0';i++)printf("%s\n",c+i);
	
	
}
