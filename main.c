#include<stdio.h>
#include<string.h>
struct farmer {
	int id[50];
	char reg_name[50][100];
	};

int length(int num){
	int i;
	while(1){
		if(num>0){
			i++;
			num=num/10;
		}
		else
			return i;
	}
}

int registration(int reg_choise)
{
	struct farmer farm={0};
	char name[50];
	int num_count, reg_num=0;
	if(reg_choise==0){
		printf("\n\nEnter your name:");
		scanf("%s",name);
		while(1){
			printf("\nEnter your last 4 digit of your aadhar card for registration:");
			scanf("%d",&reg_num);
			if(length(reg_num)==4)
				break;
			else{
				reg_num=0;
				printf("\n\nPlease enter last 4 digit of your aadhar card");
			}
		}//name[strcspn(name,"\n")]=0;
		printf("\n....Your registration is successful....\nYour registration ID is %d\n\n",reg_num);
		strcpy(farm.reg_name[num_count], name);

		farm.id[num_count]=reg_num;
		num_count++;
	}
	else if(reg_choise==1){
		printf("\nEnter your last 4 digit of you aadhar card:");
		scanf("%d",&reg_num);
		if(length(reg_num)==4){
			for(int i=0;i<sizeof(farm.id)/sizeof(farm.id[0]);i++){
				if(reg_num==farm.id[i])
					return 1;
				else
					return 0;
			}
		}
	}
}

void market_price(){	
	printf("\nRice: ₹3507/Quintal (₹35.07/kg)\n");
	printf("Ragi: ₹2920/Quintal (₹29.2/kg)\n");
	printf("Wheat: ₹2860/Quintal (₹28.6/kg)\n");
	printf("Tur dal: ₹16000/Quintal (₹160/kg)\n\n");
}

int stay_choise(char i){
	while(1){
		scanf("%c",&i);
		if(i=='Y'||i=='y')
			return 1;
		else if(i=='N'||i=='n')
			return 0;
		else
			printf("\nplease enter valid choise\n");
	}
}

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
		if(stay_choise(choise)==1)
			continue;
		else
			break;
	}
}

int main(){
	int option, i;
	char name[100];
	printf("Welcome to IFM application\n\n");
	do{
		printf("\t\tMenu\n");
		printf("1) Market Price of all products/crops\n");
		printf("2) New Register\n");
		printf("3) Bill your product/crops\n");
		printf("4) Exit\n\n");
		printf("Enter your choice: ");
		scanf("%d",&option);
		switch (option){
			case 1:{
				market_price();
				break;
			}
			case 2:{
				registration(0);
				break;
			}
			case 3:{
				while(1){
					if(registration(1)==1){	
						bill();
						break;
					}
					else
						printf("\n\tInvalid registration id..........");
				}
				break;
			}
			case 4:{
				printf("\nExiting....\n");
				break;
			}
			default:
				printf("\nEnter valid input...");
		}
	}while(option!=4);
}
