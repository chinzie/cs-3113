#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

struct BYTE
{
	unsigned int c;
	
	int count;
};
typedef struct BYTE BYTE;


int main()
{
       	int n;
	
	unsigned char *buf = (char *) malloc (1000000 *  sizeof(char));




	//unsigned int *e = (int *)  malloc (1000);



	int i = 0;
	int g = 0;
	//int c;

        while((n = read(0, buf, 1)) > 0)
	{
		buf[i] = *buf;
		i++;
	}

	BYTE b[i];
	

	
	
        const unsigned char sevenpos = 0b10000000;
        const unsigned char sixpos = 0b01000000;
        const unsigned char fivepos = 0b00100000;
        const unsigned char fourpos = 0b00010000;




	unsigned int o;

	/*
	for (int u = 0; u < i; u++)
	{
		unsigned char j = buf[u];
		if (j & sevenpos && j & sixpos)
		{
			unsigned char p = buf[u+1];
			o = 256 * j + p;
			u++;
			printf("two byte char\n");
		}
	}
	printf("%c\n", o);
	*/
	

	
	int yeet = 0;
	int k = 0;
	unsigned int y;

	for (int q = 0; q < i; q++)
	{
		unsigned char c = buf[q];
		//printf("starting\n");
		//

		if (c & sevenpos && c & sixpos)//if it is a two byte char
		{
			printf("two byte char\n");
			unsigned char p = buf[q+1];
			y = 256 * c + p;
			for (int d = 0; d < k; d++)
			{
				if (y == b[d].c)
				{
					printf("two bite already exists\n");
					break;
				}
				else if (y != b[d].c && d == k - 1)
				{
					printf("end of array\n");
					for (int t = 0; t < i; t++)
					{
						printf("yup\n");
						if (c == buf[t] && p == buf[t+1])
						{
							printf("showsup\n");
							yeet++;
						}
						b[k].c = y;
						yeet++;
						b[k].count = yeet;
						yeet = 0;
						k++;
						q++;
						q++;
						break;
					}
				}
			}
			//make edits for each case two, three, four
			//including count
			//and for first case .
		}
		
		
		if (k < 1)
		{
			//printf("first\n");
			b[k].c = c;
			for (int p = 0; p < i; p++)
			{
				if (c == buf[p])
				{
					yeet++;
				}
			}
			b[k].count = yeet;
			k++;
			yeet = 0;
		}
		else
		{
			for (int d = 0; d < k; d++)
			{
			       	if (c == b[d].c)
				{
					//printf("%c already exists\n", c);
					break;
				}
				else if (c != b[d].c && d == k - 1)
				{
					//printf("%c, does not exist\n", c);
					for (int p = 0; p < i; p++)
					{
						if (c == buf[p])
						{
                                                	yeet++;
						}
					}
					b[k].c = c;
					b[k].count = yeet;//set count value
					yeet = 0;//reset count value
                                	k++;//increment
					break;
                        	}
                	}

		}
	}
	

	
	
	printf("now printing the array: \n");
	for (int a = 0; a < k; a++)
	{
		printf("%d-->%d\n", b[a].c, b[a].count);
	}

	//free(b);

       	return 0;
}

