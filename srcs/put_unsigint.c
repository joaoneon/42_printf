#include "ft_printf.h"

int	put_unsigint(unsigned int nbr)
{
	int	counter;

	counter = 0;
	if (nbr > 9)
	{
        counter += put_unsigint(nbr / 10);
        counter += put_unsigint(nbr % 10);
	}
    else 
        counter += put_char(nbr + '0');
    return (counter);
}
