#include <unistd.h>

void ft_print_combn(int n);

int main() {
	write(1, &"\n1:\n", 4);
	ft_print_combn(1);
	//write(1, &" teste 2:", 9);
	//ft_print_combn(8);
	write(1, &"\n5:\n", 4);
	ft_print_combn(5);

	write(1, &"\n9:\n", 4);
	ft_print_combn(9);

	write(1, &"\n4:\n", 4);
	ft_print_combn(4);
}
