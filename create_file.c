#include"IFM.h"

void create_file(){
	FILE *file=fopen(File_name,"r");
	if(!file){
		fopen(File_name,"w");
	}

}
