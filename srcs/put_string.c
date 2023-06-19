#include "ft_printf.h"

int	put_string(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return (put_string("NULL"));
	while (str[i] != '\0')
	{
		put_char(str[i]);
		i++;
	}
	return (i);
}
