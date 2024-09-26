
#include"IFM.h"

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
