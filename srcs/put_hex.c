#include "ft_printf.h"

int     put_hex(unsigned int nbr, char c)
{
    int counter;
    counter = 0;
    
    if (c == 'x')
    {
        if (nbr > 15)
        {
            counter += put_hex(nbr / 16, c);
            counter += put_hex(nbr % 16, c);
        }
        else
            counter += put_char(LOW_BASE[nbr]);
    }
    if (c == 'X')
    {
        if (nbr > 15)
        {
            counter += put_hex(nbr / 16, c);
            counter += put_hex(nbr % 16, c);
        }
        else
            counter += put_char(HIGH_BASE[nbr]);
    }
    return (counter);
}
