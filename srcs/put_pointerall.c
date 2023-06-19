#include "ft_printf.h"

static int	put_pointer(long nbr, char *base);

int	pointer_all(long nbr, char *base)
{
	int	counter;

	counter = 0;
	counter += put_string("0x");
	counter += put_pointer(nbr, base);
	return (counter);
}

int	put_pointer(long nbr, char *base)
{
	int	counter;

	counter = 0;
	if (nbr > 15)
		counter += put_pointer(nbr / 16, base);
	counter += put_char(base[nbr % 16]);
	return (counter);
}
