struct farmer {
	int id[50];
	char reg_name[50][100];
	};

int length(int num){
	int i=0;
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
	struct farmer farm;
	char name[50];
	int num_count, reg_num=0;
	if(reg_choise==0){
		while(1){
			printf("\n\nEnter your last 4 digit of your aadhar card for registration:");
			scanf("%d",&reg_num);
			if(length(reg_num)==4){
				farm.id[num_count]=reg_num;
				break;
			}
			else if(length(reg_num)!=4){
				printf("\n\nPlease enter last 4 digit of your aadhar card\n\n");
			}
		}
		getchar();
		printf("\n\nEnter your name:");
		fgets(name, sizeof(name), stdin);
		strcpy(farm.reg_name[num_count], name);
		printf("\n....Your registration is successful....\nYour registration ID is %d\n\n",reg_num);
		num_count++;
	}
	else if(reg_choise==1){
		printf("\nEnter your last 4 digit of you aadhar card:");
		scanf("%d",&reg_num);
		if(length(reg_num)==4){
			for(int i=0;i<sizeof(farm.id)/sizeof(farm.id[0]);i++){
				if(reg_num==farm.id[i] & i!=sizeof(farm.id)/sizeof(farm.id[0]))
					return 1;
				else if(reg_num!=farm.id[i] & i!=sizeof(farm.id)/sizeof(farm.id[0]))
					continue;
				else if(i==sizeof(farm.id)/sizeof(farm.id[0]))
					return 0;
			}
		}
		else if(length(reg_num)!=4){
			printf("\n\nPlease enter last 4 digit of your aadhar card");
			return registration(1);
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