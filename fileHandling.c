#include"IFM.h"

void create_file(){
	FILE *file=fopen(File_name,"r");
	if(!file){
		fopen(File_name,"w");
	}
}

int add_new(int num,char *name)
{
	FILE *File=fopen(File_name,"a");
	if(!File){
		perror("");
		return 0;
	}
	fprintf(File,"%d %s",num,name);
	fclose(File);
}

int search_ID(int ID)
{
	int i;
	FILE *File=fopen(File_name,"r");
	if(!File){
		perror("");
		return 0;
	}
	while (fscanf(File,"%d %*s",&i) == 1){
		//int num=atoi(i);
		if(ID==i)
			return 1;}
	return 0;
	fclose(File);
}
