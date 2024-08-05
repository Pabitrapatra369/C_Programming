#include<stdio.h>
int main(){
	int op;
	float m,km,cm;
	a:
	printf("\nenter the option what you want to convert:");
	printf("\n1.Meters to Kilometers\n2.Kilometers to Meters\n3.Centimeters to Meters\n4.Meters to Centimeters\n5.Exit");
	printf("\nEnter your choice:");
	scanf("%d",&op);
	switch(op){
		case 1:
		printf("Enter the quantity in meters:");
		scanf("%f",&m);
		printf("%.2f kilometers",m/1000);goto a;
		case 2:
		printf("Enter the quantity in kilometers:");
		scanf("%f",&km);
		printf("%.2f meters",km*1000);goto a;
		case 3:
		printf("Enter the quantity in centemeters:");
		scanf("%f",&cm);
		printf("%.2f meters",cm/100);goto a;
		case 4:
		printf("Enter the quantity in meters:");
		scanf("%f",&m);
		printf("%.2f centemeters",m*100);goto a;
		case 5:return 0;
		default:printf("invalid input.");
	}
	return 0;
}
