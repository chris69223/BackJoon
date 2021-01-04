#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct fruit
{
	char fruit[20];
}fru;
int main()
{

	fru fr[20];
	FILE* fp1 = fopen("fruitList.txt", "r");
	FILE* fp2 = fopen("noneBerry.txt", "w");
	FILE* fp3 = fopen("berry.txt", "w");
	int i = 0;
	char bry[10] = "berry";
	
	while (!feof(fp1))
	{
		fscanf(fp1,"%s", fr[i].fruit);

	}
	
	for(i=0;i<sizeof(fr)/sizeof(fru );i++)
	{
		if(strstr(fr[i].fruit,bry)!=NULL)
		{
			fprintf(fp3,"%s\n", fr[i].fruit);
			
		}
		else
		{	fprintf(fp2,"%s\n", fr[i].fruit);
			
		
		}
	}
	
	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	//system("notepad.exe berry.txt");
	return 0;
	\
}