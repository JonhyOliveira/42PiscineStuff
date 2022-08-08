 void ft_swap(int *a, int *b);

 int main()
{
	int a;
	int b;

	a = 48;
	b = 100;
	write(1, &a, 1);
	ft_swap(&a, &b);
}
