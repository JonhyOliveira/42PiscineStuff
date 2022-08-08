#include <unistd.h>

void ft_ft(int *nbr);

int main()
{
	int x;

	x = '0';

	write(1, &x, 1);
	
	ft_ft(&x);

	write(1, &x, 1);
	
}
