#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

struct BYTE
{
	char c[100];
	int count;
};
typedef struct BYTE BYTE;


int main()
{
       	int n;
  
	/*
	int h = 5;
	BYTE b[h];

	for (int i = 0; i < h; i++)
	{
		b[i].c[i] = 'g';
		b[i].count = 1;
	}
	for (int i = 0; i < h; i++)
	{
		printf("value at %d, is %c, for count %d\n", i, b[i].c[i], b[i].count);
	}
	*/



	

	unsigned char *buf = (char *) malloc ( sizeof(char));
	

	int i = 0;
	int g = 0;
	int c;


        while((n = read(0, buf, 1)) > 0)
	{
		buf[i] = *buf;
		printf("%c\n", buf[i]);
		//printf("%c\n", *buf);
		i++;


		
		/*
		for (int j = 0; j < temp; j++ && i > 0 )
                {
			printf("i is %d\n", i);
			printf("j is %d\n", j);
                        printf("buf[i] is %d\n", buf[i]);
                        printf("buf[j] is %d\n", buf[j]);

                        if (buf[i] == buf[j])
                        {
                                printf("already exists\n");
                                buf[i] = 0;
                                i--;
                        }

		}
		}
		
		//char c = n & 0xFF;
		printf("%d\n", *buf);
		//printf("%d\n", c);
		if(*buf <= 0x7F)
		{
			printf("ascii\n");
			buf[i] = *buf;
			i++;
		}
		else if(*buf <= 0x07FF)
		{
			printf("2 byte\n");

			buf[i] = *buf;
			i++;

			n = read(0, buf, 1);
			buf[i] = *buf;
			i++;
		}
		else if(*buf <= 0xFFFF)
		{
			printf("3 byte\n");
			n = read(0, buf, 2);
		}
		else if(*buf <= 0x10FFFF)
		{
			printf("4 byte\n");
			n = read(0, buf, 3);
		}
		printf("i is: %d\n", i);
		*/
	
	}

	BYTE b[i];

	
	printf("%d\n", i);
	for (int q = 0; q < i; q++)
	{
		b[q].c[q] = buf[q];
		for (int a = 0; a < i; a++)
		{
			if (b[q].c[q] == buf[a])
			{
				printf("repeat\n");
			}
		}

	}
	

	//for (int q = 0; q < i; q++)
	//{
	//	printf("%c\n", b[q].c[q]);
	//}

	
	int count = 1;
	printf("now printing the array: \n");
	for (int a = 0; a < i; a++)
	{
		printf("%c-->%d\n", buf[a], count);
	}

       	return 0;
}

