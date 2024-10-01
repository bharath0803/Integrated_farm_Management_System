#include"IFM.h"

int stay_choise(){
	char i;
	printf("\nIf yes enter Y\nIf no enter N\nEnter your choise:");
	while(1){
		scanf("%c",&i);
		if(i=='Y'||i=='y')
			return 1;
		else if(i=='N'||i=='n')
			return 0;
		else if(i=='\n')
			continue;
		else{
			printf("\nplease enter valid choise\n");
		}
	}
}
