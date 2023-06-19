#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define LOW_BASE "0123456789abcdef"
# define HIGH_BASE "0123456789ABCDEF"

int	ft_printf(const char *str, ...);
int	put_char(char c);
int	put_string(char *str);
int	pointer_all(long nbr, char *base);
int	put_integer(int nbr);
int	put_unsigint(unsigned int nbr);
int     put_hex(unsigned int nbr, char c);

#endif