#include"IFM.h"
#include"bill.c"
#include"length.c"
#include"registration.c"
#include"stay_choise.c"
#include"display.c"
#include"validchoice.c"
#include"market_price.c"



int main(){
	char name[100];
	int option;
	printf("Welcome to IFM application\n\n");
	do{	
		display();
		option=validchoice();
		switch (option){
			case 1:{market_price();		break;}
			case 2:{registration(0);	break;}
			case 3:{while(1){
					if(registration(1)==1){	bill();		break;}
					else printf("\n\tInvalid registration id..........\n");
				}break;}
			case 4:{printf("\nExiting....\n");	break;}
			default:printf("\nEnter valid input...\n");
		}
	}while(option!=4);
}
