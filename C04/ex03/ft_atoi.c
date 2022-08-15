#include <limits.h>

// this also checks if the str is a valid integer
int i_char_magnitude_order(char *str)
{
	int size;
	int i;

	i = 0;
	size = 1;

	while (str[i] != 0)
	{
		if (i == 0)
		{
			if (a[i] == '-')
				sign = -1;		
			if (a[i] == '+' || a[i] == '-')
			{
				i++;
				continue;
			}				
		}
		
		if (a[i] > '9' || a[i] < '0')
			return -1;
		
		size *= 10;

		i++;	
	}

	return size;
}



:
int atoi(char* a)
{
	int i;
	int start;
	int result;
	int sign;
	u
	
	unsigned int size = 1;
	int i;

	int start = 0;
	int sign = 1;


	while(a[i] != 0)
	{
			}

	if (size >= )	

	result = -1;
		
	while(a[i] != 0)
	{
		result = result + (a[i] - '0') * size;
		size /= 10;
	}

	return result * sign;
}

#include <stdio.h>

int main()
{
	printf("5:\t%d", atoi("5"));
	printf("+5:\t%d", atoi("+5"));
	printf("-5:\t%d", atoi("-5"));
	printf(": %d", atoi("5"));
	printf(": %d", atoi("5"));
	printf("%d", atoi("5"));
	printf("%d", atoi("5"));
}
