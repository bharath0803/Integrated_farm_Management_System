#include"IFM.h"

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

