#include<stdio.h>
int main(){
	float sub[6],s=0;
	int n,i,flag=0;
	char id[5],name[10];
	printf("enter student id and name:");
	scanf("%s %s",id,name);
	printf("enter the marks of the student:");
	for(i=0;i<6;i++){
		scanf("%f",&sub[i]);
		s+=sub[i];
		if(sub[i]<35) flag=1;
	}
	printf("name=%s\nid=%s",name,id);
	if(flag==1)printf("total=%.2f Avarage=%.2f result=%s",s,s/6,"fail");
	else printf("total=%.2f Avarage=%.2f result=%s",s,s/6,"pass");
	
	
}
