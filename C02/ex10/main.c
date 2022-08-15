#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char src[] = "olado";
	char dest[] = "xxxxxxxxxxx";

	printf("strlcpy test:\n");
	printf("src: \'%s\'\n", src);
	ft_strlcpy(dest, src, 7);
	printf("dest: \'%s\'\n", dest);
}
