#include"IFM.h"

int validchoice(){
	int choice;
	char ch;
	while (1) {
		printf("\nEnter your choice: ");
		if (scanf("%d", &choice) == 1) 
		{
			ch = getchar();
			if (ch == '\n') 
			{
				return choice;
			} 
			else 
			{
				printf("Invalid Choicex. Please enter a valid option.\n");
				while (ch != '\n' && ch != EOF) 
				{
					ch = getchar();
				}
			}
		} 

		else 
		{
			printf("Invalid Choice. Please enter a valid option.\n");
			while (getchar() != '\n'); // Clear the input buffer
		}
	}
}

