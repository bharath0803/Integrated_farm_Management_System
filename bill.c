
#include"IFM.h"

void bill(){
	float num_kg,cost,total;
	int option2=0;
	while(1){
		printf("\n\nPlease select your product amoung this options");
		printf("\n\t1) Rice \n");
		printf("\t2) wheat\n");
		printf("\t3) ragi\n");
		printf("\t4) tur dal\n\n");
		printf("Enter your choice:");
		scanf("%d",&option2);
		switch (option2){
			case 1:{
				printf("\nenter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=35.07*num_kg;
				break;
			}
			case 2:{
				printf("\nenter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=29.2*num_kg;
				break;
			}
			case 3:{
				printf("\nenter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=28.6*num_kg;
				break;
			}
			case 4:{
				printf("\nenter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=160*num_kg;
				break;
			}
			default:
				printf("\nEnter valid option....");
		}
		total+=cost;
		char choise;
		printf("the cost of your crop is - %.2f", cost);
		printf("total cost is %.2f",total);
		printf("\n\ndo you still want to sell other product:\nif yes enter Y\nif no enter N\nEnter your choise:");
		scanf("%c",&choise);
		if(stay_choise(choise)!=1)
			break;
	}
}
