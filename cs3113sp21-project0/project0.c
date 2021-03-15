#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

struct BYTE
{
	unsigned int c[100000];
	int count;
};
typedef struct BYTE BYTE;


int main()
{
       	int n;
	
	unsigned char *buf = (char *) malloc ( sizeof(char));
	
	int i = 0;
	int g = 0;
	//int c;

        while((n = read(0, buf, 1)) > 0)
	{
		buf[i] = *buf;
		i++;
		/*
		
		if (*buf <= 0x7F)
		{
			//printf("ascii\n");
			buf[i] = *buf;
			i++;
		}
		else if (*buf <= 0x07FF)
		{
			//printf("two byte\n");
			buf[i] = *buf;
			//buf[i] = (((*buf >> 6) & 0x1F) | 0xC0);
			//buf[i+1] = (((*buf >> 0) & 0x3F) | 0x80);
			
			i++;
		}
		*/

		//buf[i] = *buf;
		//printf("%c\n", buf[i]);
		//printf("%c\n", *buf);
		//i++;

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
	
	//to print multibyte, seek flag, combine, then print
	
        const unsigned char sevenpos = 0b10000000;
        const unsigned char sixpos = 0b01000000;
        const unsigned char fivepos = 0b00100000;
        const unsigned char fourpos = 0b00010000;




	unsigned int o;

	
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
	

	for (int u = 0; u < i; u++)
	{
		printf("%c\n", buf[u]);
	}
	
	

	
	int yeet = 0;
	int k = 0;
	unsigned int y;

	for (int q = 0; q < i; q++)
	{
		unsigned char c = buf[q];
		//printf("starting\n");
		//

		if (c & sevenpos && c & sixpos)
		{
			unsigned char p = buf[q+1];
			y = 256 * c + p;
			b[k].c[k] = y;
			yeet++;
			b[k].count = yeet;
			//make edits for each case two, three, four
			//including count
			//and for first case .

			q++;
		}
		
		
		if (k < 1)
		{
			//printf("first\n");
			b[k].c[k] = c;
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
			       	if (c == b[d].c[d])
				{
					//printf("%c already exists\n", c);
					break;
				}
				else if (c != b[d].c[d] && d == k - 1)
				{
					//printf("%c, does not exist\n", c);
					for (int p = 0; p < i; p++)
					{
						if (c == buf[p])
						{
                                                	yeet++;
						}
					}
					b[k].c[k] = c;
					b[k].count = yeet;
					yeet = 0;
                                	k++;
					break;
                        	}
                	}

		}
	}
	

	
	
	printf("now printing the array: \n");
	for (int a = 0; a < k; a++)
	{
		printf("%c-->%d\n", b[a].c[a], b[a].count);
	}

       	return 0;
}

