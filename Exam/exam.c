#include<stdio.h>
int main()
{
    int mark,id[100],n,i,j,od[100],sci[100],en[100],hi[100],phy[100],ma[100],total,avg,m=10;
    char name[m][200];
    printf("Enter student count=");scanf("%d",&n);
    printf("------Enter student details----\n");
    for(i=0;i<n;i++)
    {
        printf("Enter student name=");scanf("%s",name[i]);
        printf("Enter id=");scanf("%d",&id[i]);
        printf("Odia mark=");scanf("%d",&od[i]);
        printf("Hindi mark=");scanf("%d",&hi[i]);
        printf("English mark=");scanf("%d",&en[i]);
        printf("Physics mark=");scanf("%d",&phy[i]);
        printf("science mark=");scanf("%d",&sci[i]);
        printf("Math mark=");scanf("%d",&ma[i]);
    }
        
        printf("----------------Student detail--------------\n");
        printf("Id\tName\tOdia\tHindi\tEnglish\t    Math\tscience\tPhysics\ttotal\tAvg\tP/f\n");
        printf("-------------------------------------------------------------------------------------\n");
        for(i=0;i<n;i++,total=0)
        {
            for( j=0;j==0;j++)
            {
                printf("%d\t",id[i]);
                printf("%s\t",name[i]);
                printf("%d\t",od[i]);
                printf("%d\t",hi[i]);
                printf("%d\t",en[i]); 
                printf("%d\t",ma[i]);
                printf("%d\t",sci[i]);
                printf("%d\t",phy[i]);
                
                total =od[i]+hi[i]+en[i]+ma[i]+sci[i]+phy[i];
                printf("%d\t",total);
                avg=total/6;
                printf("%d\t",avg);
                if(avg>=35)printf("\tpass");else printf("\tFail");
                
            }
             printf("\n");
     }   
        
        
    
}
