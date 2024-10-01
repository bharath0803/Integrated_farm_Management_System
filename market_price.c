#include"IFM.h"

void market_price(){	
	printf("\n1) Rice: ₹3507/Quintal (₹35.07/kg)\n");
	printf("2) Ragi: ₹2920/Quintal (₹29.2/kg)\n");
	printf("3) Wheat: ₹2860/Quintal (₹28.6/kg)\n");
	printf("4) Tur dal: ₹16000/Quintal (₹160/kg)\n\n");
	
	printf("Do you to want to sell the products amoung this :");
	if(stay_choise()){
		if(comform_reg())
			bill();
	}
}

