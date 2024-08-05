#include<stdio.h>
int main(){
//Transpose of  n*n matrix:
/*	int a[20][20],r,c,i,j;
	puts("Enter no of rows and columns:");
	scanf("%d %d",&r,&c);
	printf("Enter %d elements:\n",r*c);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)scanf("%d",&a[i][j]);
	}
	puts("Your matrix is");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)printf("%d",a[i][j]);
		printf("\n");
	}
	puts("Transposed Elements");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf("%3d",a[j][i]);
		}
		printf("\n");
	}   */
//finding the trace of n*n matrix:


//finding row and column sum:
/*int a[10][10],r,c,nr,nc;
	puts("Enter the no of row and column:");
    scanf("%d%d",&nr,&nc);
    printf("Enter %d elements\n",nr*nc);
    for(r=0;r<nr;r++){
    	for(c=0;c<nc;c++)scanf("%d",&a[r][c]);
    	printf("\n");
	}
	puts("your matrix is");
	for(r=0;r<nr;r++){
    	for(c=0;c<nc;c++)printf("%3d",a[r][c]);
    	printf("\n");
	}

	for(r=0;r<=nr;r++){
		int rs=0,cs=0;
    	for(rs=cs=c=0;c<=nc;c++){
    		a[r][nc]=rs;
    	    a[nr][r]=cs;
    		rs+=a[r][c];
    		cs+=a[c][r];
		}
		
	}
	puts("sum of row and column matrix");
	for(r=0;r<=nr;r++){
		int rs,cs;
    	for(c=0;c<=nc;c++){
    		if(r==nr&&c==nc){
    			printf(" ");
    			break;
			}
    		printf("%10d",a[r][c]);
		}
		printf("\n");
	}   
	*/
// Read nstu’s id, name, marks in 6 sub’s and find tot, avg and pass / fail as follows

/*
	float arr[100][100],avg;
	int n,r,c,rn,rc,tot,paf;
	char name[10][20];
	puts("Enter the number of students you want to store:");
	scanf("%d",&n);
	puts ("Enter all the data for the students:\n");
	for(r=0;r<n;r++){
		printf("Enter the id,name and 6 subjext mark of student %d\n",r+1);
		scanf("%f %s",&arr[r][0],name[r]);
		for(tot=c=2;c<=7;c++){
		   	scanf("%f",&arr[r][c]);
		   	if(arr[r][c]<35)arr[r][10]=-1;
			tot+=arr[r][c];
		}
		arr[r][8]=tot;
		arr[r][9]=tot/6;
	}
	puts("id\tname\tTel\tEng\tHin\tMat\tSci\tSoc\tTot\tAvg\tPass/Fail");
	puts("----------------------------------------------------------------------------------------------------------");
	for(r=0;r<n;r++){
		printf("%.0f\t%s\t",arr[r][0],name[r]);
		for(c=2;c<=7;c++){
			 printf("%.0f\t",arr[r][c]);
		}
		printf("%.0f\t%.2f\t",arr[r][8],arr[r][9]);
		if(arr[r][10]==-1)printf("fail");else printf("pass");
		printf("\n");
	}  */
}
