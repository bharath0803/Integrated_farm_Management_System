#include"IFM.h"
#include"bill.c" 
#include"length.c" 
#include"stay_choise.c" 
#include"display.c" 
#include"validchoice.c" 
#include"market_price.c" 
#include"fileHandling.c" 
#include"new_reg.c" 
#include"comform_reg.c" 




int main()
{
	char name[100];
	int option;
	create_file();
	printf("Welcome to IFM application\n\n");
	do{	
		display();
		option=validchoice();
		switch (option){
			case 1:{market_price();		break;}
			case 2:{new_reg();		break;}
			case 3:{while(1){
					if(comform_reg()==1){bill();		break;}
					else{printf("\n\tInvalid registration id..........\n");}
				}break;}
			case 4:{printf("\nExiting....\n");	break;}
			default:printf("\nEnter valid input...\n");
		}
	}while(option!=4);
}
