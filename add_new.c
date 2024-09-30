#include"IFM.h"



int add_new(int num,char *name)
{
	FILE *File=fopen(File_name,"w");
	if(!File){
		perror("");
		return 0;
	}
	fprintf(File,"%d %s",num,name);
	fclose(File);
}
