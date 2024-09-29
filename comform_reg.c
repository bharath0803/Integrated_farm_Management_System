
#include"IFM.h"

int comform_reg()
{
	struct farmer farm_search;
	while(1){
		printf("\nEnter your last 4 digit of you aadhar card:");
		scanf("%d",&farm_search.id);
		if(length(farm_search.id)==4){
			if(search_ID(farm_search.id)==1)
				return 1;
			else
				return 0;
			}
		else if(length(farm_search.id)!=4){
			printf("\n\nPlease enter last 4 digit of your aadhar card");
		}
	}
}
