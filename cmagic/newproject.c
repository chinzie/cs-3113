#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

#define PI 3.145926
#define HALFOF(X) X/2

struct roster {
	short number;
	char team[60];
	//char *name;
};
typedef struct roster roster;
//struct roster sooners;
//myroster sooners;
int printroster(roster r)
{
	printf("<%d: %s>\n", r.number, r.team);
	return 0;

}

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
	i = 0;
	printf("i = %d\n", i);
	printf("i++ = %d\n", i++);
	printf("++i = %d\n", ++i);
	
	// Bit Manipulation
	


	// Pointers
	int box;
	box = 0xA;//hex value
	printf("Pointers---------------------\n");
	
	printf("box value = %d\n", box);
	printf("box address = %p\n", &box);

	printf("box sizeof(int) = %ld\n", sizeof(box));
	printf("\n");
	int *label = &box;//points to address of box
	printf("label value = %p\n", label);
	printf("label address = %p\n", &label);
	printf("label sizeof(int) = %ld, %ld\n", sizeof(label), sizeof(int*));
	printf("\n");
	printf("label *value = %d\n", *label);

	int **qrcode = &label;
	printf("qrcode value = %d\n", **qrcode);

	// Structs
	roster r;
	r.number = 24;
	strncpy(r.team, "Sooners", 8);
	printroster(r);
	roster = *org;
	org = &r;
	printroster(*org);

	//Dynamically Allocate malloc/calloc

	//org = malloc(sizeof(roster)*32);
	org = calloc(sizeof(roster)*32);
	//org[0].name
	
	free(org);

	//Arrays
	int years[4];

	//char grades[] = {'a', 'b', 'c' ,'d'};

	char grades[4];
	grades[0] = 'a';
	grades[1] = 'b';
	grades[2] = 'c';
	grades[3] = 'd';

	printf("grades[0] = %c\n", grades[0]);
	printf("sizeof(grades[0]) = %ld\n", sizeof(grades[0]));
	printf("sizeof(grades) = %ld\n", sizeof(grades));



	return 0;
}
