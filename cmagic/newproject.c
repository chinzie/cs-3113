#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define PI 3.145926
#define HALFOF(X) X/2

int main(int argc, char **argv, char **envp)
{
	printf("hello world\n");

	printf("argc: %d\n", argc);

	int i;
	for (i = 0; i < argc; ++i)
	{
		printf("%d --> %s\n", i, argv[i]);
	}
	printf("\n");
	//for (i = 0; i < argc; ++i)
	//{
	//	printf("%d--> %s\n", i, envp[i]);
	//}
	char character;
	short myshort;
	long mylong;
	double mydouble;
	float myfloat;
	//bool mybool;
	//string mystring;

	unsigned short ushort = 5;
	myshort = -1;

	printf("sizeof(char): %ld\n", sizeof(char));
	
	printf("sizeof(int): %ld\n", sizeof(int));
	
	printf("sizeof(short): %ld\n", sizeof(short));
	
	printf("sizeof(float): %ld\n", sizeof(float));

	//printf("ushort=%d, myshort=%d", ushort, myshort);
	

	//++i vs i++
	printf("i = %d\n", i);
	printf("i++ = %d\n", i++);
	printf("++i = %d\n", ++i);
	// Bit Manipulation
	return 0;
}
