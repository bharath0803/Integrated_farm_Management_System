#ifndef IFM_h_INCLUDED
#define IFM_h_INCLUDED

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char File_name[]="Farm_document.txt";

struct farmer {
	int id;
	char reg_name[100];
	};
	
void bill();
int length(int num);
int stay_choise(char i);
void display();
int validchoice();
void market_price();
void create_file();
int add_new(int num,char *name);
int new_reg();
int comform_reg();
int search_ID(int ID);


#endif
