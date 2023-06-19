#include "ft_printf.h"

int	put_integer(int nbr)
{
	int	counter;

	counter = 0;
	if (nbr == -2147483648)
	{
		counter += put_string("-2");
		counter += put_integer(147483648);
	}
	else if (nbr < 0)
	{
		counter += put_char('-');
		nbr *= -1;
	}
	else if (nbr > 9)
	{
		counter += put_integer(nbr / 10);
		counter += put_integer(nbr % 10);
	}
	else
		counter += put_char(nbr + '0');
	return (counter);
}
