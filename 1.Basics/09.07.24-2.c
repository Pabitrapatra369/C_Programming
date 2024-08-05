#include<stdio.h>
int main(){
	int op,day,cost;
	printf("Car Manu:\n1.Sedan - $50\n2.SUV - $70\n3.back - $40\n4.Truck - $100");
	printf("enter your choice of car model :");
	scanf("%d",&op);
	printf("enter the days you required:");
	scanf("%d",&day);
	switch(op){
		case 1:
		cost = day*50;
		printf("you have to pay :$%d",cost);break;
		case 2:
		cost = day*70;
		printf("you have to pay :$%d",cost);break;
		case 3:
		cost = day*40;
		printf("you have to pay :$%d",cost);break;
		case 4:
		cost = day*100;
		printf("you have to pay :$%d",cost);break;
		default :printf("please enter a valid option.");
	}
	return 0;
}
