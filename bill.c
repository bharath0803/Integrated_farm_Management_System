
#include"IFM.h"

void bill(){
	float num_kg,cost,total;
	int option2=0;
	while(1){
		printf("\n\nPlease select your product amoung this options");
		printf("\n\t1) Rice \n");
		printf("\t2) Wheat\n");
		printf("\t3) Ragi\n");
		printf("\t4) Tur dal\n\n");
		printf("Enter your choice:");
		scanf("%d",&option2);
		switch (option2){
			case 1:{
				printf("\nEnter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=35.07*num_kg;
				break;
			}
			case 2:{
				printf("\nEnter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=29.2*num_kg;
				break;
			}
			case 3:{
				printf("\nEnter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=28.6*num_kg;
				break;
			}
			case 4:{
				printf("\nEnter how many kg do you want to sell:");
				scanf("%f",&num_kg);
				cost=160*num_kg;
				break;
			}
			default:
				printf("\nEnter valid option....");
		}
		total+=cost;
		char choise;
		printf("The cost of your crop is - %.2f\n\n", cost);
		printf("Total cost is %.2f\n\n",total);
		printf("\n\nDo you still want to sell other product:\nIf yes enter Y\nIf no enter N\nEnter your choise:");
		choise=getchar();
		if(stay_choise(choise)!=1)
			break;
	}
}
