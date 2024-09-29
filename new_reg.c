
#include"IFM.h"

int new_reg()
{
	struct farmer farm;
	while(1){
		printf("\n\nEnter your last 4 digit of your aadhar card for registration:");
		scanf("%d",&farm.id);
		if(length(farm.id)==4){
			break;
		}
		else if(length(farm.id)!=4){
			printf("\n\nPlease enter last 4 digit of your aadhar card\n\n");
		}
	}
	getchar();
	printf("\n\nEnter your name:");
	fgets(farm.reg_name, sizeof(farm.reg_name), stdin);
	add_new(farm.id,farm.reg_name);
	printf("\n....Your registration is successful....\nYour registration ID is %d\n\n",farm.id);
	
}
