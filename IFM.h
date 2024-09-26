#ifndef IFM_h_INCLUDED
#define IFM_h_INCLUDED

#include<stdio.h>
#include<string.h>

struct farmer {
	int id[50];
	char reg_name[50][100];
	};
	
int registration(int reg_choise);
void bill();
int length(int num);
int stay_choise(char i);
void display();
int validchoice();
void market_price();


#endif
