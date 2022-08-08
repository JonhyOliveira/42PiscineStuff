#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int x;
	int *xp1;
	int **xp2;
	int ***xp3;
	int ****xp4;
	int *****xp5;
	int ******xp6;
	int *******xp7;
	int ********xp8;
	int *********xp9;

	x = '0';
	xp1 = &x;
	write(1, xp1, 1);
	xp2 = &xp1;
	xp3 = &xp2;
	xp4 = &xp3;
	xp5 = &xp4;
	xp6 = &xp5;
	xp7 = &xp6;
	xp8 = &xp7;
	xp9 = &xp8;

	ft_ultimate_ft(xp9);

	write(1, &x, 1);
	
}
