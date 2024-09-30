#include"IFM.h"


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
