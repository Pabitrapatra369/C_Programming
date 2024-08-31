#include<stdio.h>
#include<string.h>
int isPerfect(int  n){
	int i,j,sum=0;
	for(i=1;i<=n/2;i++){
		if(n%i==0)sum+=i;
	}
	if(sum==n)return 1;
	return 0;
}
int isanagram(char s1[],char s2[]){
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
	printf("%d - %d",c,len);
	if(len==c)return  1;
	return 0;
}
int isVowel(char c){
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')return 1;
	return 0;
}
void reverseVowel(char s[]){
	int i,j,len;
	for(i=0;s[i];i++);len=i;
	for(i=0,j=len-1;i<j;){
		if(isVowel(s[i])&&isVowel(s[j])){
			s[i]=s[i]+s[j];
			s[j]=s[i]-s[j];
			s[i]=s[i]-s[j];
			i++;
			j--;
			//puts(s);
		}
		else if(isVowel(s[i])==1&& isVowel(s[j])==0)j--;
		else if(isVowel(s[i])==0&& isVowel(s[j])==1)i++;
		else {
			i++;
			j--;
		}
	}
	puts(s);
}
int main()
{
//	int a,b,i,j;
//    printf("Enter the range start and end");
//    scanf("%d%d",&a,&b);
//	for(i=a;i<=b;i++){
//		if(isPerfect(i))printf("%d ",i);
//	}
//anagram
//	char s1[100],s2[100];
//	gets(s1);gets(s2);
//	isanagram(s1,s2)==1?printf("anagram"):printf("not anagram");
//    return 0;
//2d array lower tringle sum
//	int a[10][10],r,i,j;
//	puts("Enter the row and col of the array :");
//	scanf("%d",&r);
//	puts("Enter the elements");
//	for(i=0;i<r;i++){
//		for(j=0;j<r;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	int sum=0;
//	puts("matrix is");
//	for(i=0;i<r;i++){
//		for(j=0;j<r;j++){
//			if(i>j)sum+=a[i][j];
//		
//	}
//	}
//		printf("sum is%d ",sum);
//reverse vowels present in a given string
		char s[100];
		gets(s);
		reverseVowel(s);
	
}
