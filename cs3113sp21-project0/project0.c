#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

#define PI 3.145926
#define HALFOF(X) X/2


int main(int argc, char **argv, char **envp)
{
	//read in file
	FILE *f;
        char c;
        f = fopen("test.txt","r");

        while((c=fgetc(f))!=EOF)
	{
		printf("%c",c);
		//store in array

        }

        fclose(f);

	return 0;
}
