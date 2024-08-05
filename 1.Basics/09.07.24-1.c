#include<stdio.h>
int main(){
	printf("Main Menu:\n");
	printf("1.Fruits\n2.Vegetables\n3.Exit\n");
	int op,fo,vo;
	float q;
	printf("\nEnter your choice:");
	scanf("%d",&op);
	switch(op){
		case 1:
		printf("Fruits Menu:\n1. Apple ( 15 Rupees each)\n2. Banana  ( 10 Rupees each)\n3. Orange  ( 20 Rupees each)");
		printf("\nenter your choice:");
		scanf("%d",&fo);
		printf("Enter the quantity:");
		scanf("%f",&q);
		switch(fo){
			case 1:printf("bill amount is:%.2f",q*15);break;
			case 2:printf("bill amount is:%.2f",q*10);break;
			case 3:printf("bill amount is:%.2f",q*20);break;
			default : printf("Invalid fruit Menu Choice");
		}break;
		case 2:printf("Vegetables Menu:\n1. Carrot ( 5 Rupees each)\n2. Broccoli ( 10 Rupees each)\n3. Spinach ( 15 Rupees each)");
     	printf("\nenter your choice:");
		scanf("%d",&fo);
		printf("Enter the quantity:");
		scanf("%f",&q);
		switch(fo){
			case 1:printf("bill amount is:%.2f",q*5);break;
			case 2:printf("bill amount is:%.2f",q*10);break;
			case 3:printf("bill amount is:%.2f",q*15);break;
			default : printf("Invalid vegetable Menu Choice");
		}break;
		case 3:exit(0);
		default : printf("Invalid Main Menu Choice");
	}
	return 0;
}
