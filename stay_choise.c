#include"IFM.h"

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