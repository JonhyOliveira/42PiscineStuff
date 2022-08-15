#include <unistd.h>

void	write_str(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}



int	main(int argc, char *argv[])
{
	if (argc != 17)
	{
		write_str("Error");
		return -1;
	}
	

}
