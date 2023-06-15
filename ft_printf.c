/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:21:18 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/06/14 21:30:22 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int	variable_converter(char* str, int index, va_list list);
int	put_char(char c);
int	put_string(char *str);
int	put_pointer(long nbr, char *base);
int	pointer_all(long nbr, char *base);
int	put_integer(int nbr);
int	put_unsigint(unsigned int nbr);
int     put_hex(unsigned int nbr, char c);

#define LOW_BASE "0123456789abcdef"
#define HIGH_BASE "0123456789ABCDEF"

int	ft_printf(const char *str, ...)
{
	va_list	list;
	int		index;
	int		counter;

	if (str == NULL)
		return (-1);
	va_start(list, str);
	index = -1;
	counter = 0;
	while (str[++index] != '\0')
	{
		if (str[index] == '%')
		{
			index++;
			counter += variable_converter((char *)str, index, list);
        }
		else
			counter+= put_char(str[index]);
	}
	va_end(list);
	// printf("\n%i\n", counter);
	return (counter);
}

// cspdiuxX%
int	variable_converter(char *str, int index, va_list list)
{
	int counter;
	counter = 0;

	if (str[index] == 'c')
		counter += put_char(va_arg(list, int));
	else if (str[index] == 's')
		counter += put_string(va_arg(list, char *));
	else if (str[index] == 'p')
		counter += pointer_all(va_arg(list, unsigned long), LOW_BASE);
	else if (str[index] == 'd' || str[index] == 'i')
		counter += put_integer(va_arg(list, int));
	else if (str[index] == 'u')
		counter += put_unsigint(va_arg(list, unsigned int));
    else if (str[index] == 'x' || str[index] == 'X')
        counter += put_hex(va_arg(list, int), str[index]);
    else if (str[index] == '%')
        counter += put_char('%');
	return (counter);
}

int	put_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	put_string(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (put_string("NULL"));
	while (str[i] != '\0')
	{
		put_char(str[i]);
		i++;
	}
	return (i);
}

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

int	main(void)
{
    // printf("%d\n", ft_printf("teste %x oizin\n", 1425));
    // printf("teste %x oizin", 1425);

	printf("\n%i\n", ft_printf("Eu ando %x, passos por dia", 2000));
	printf("\n%i\n", printf("Eu ando %x, passos por dia", 2000));

	// printf("\n%i", printf("lord %i, cm", 20));

	return (0);
}

//  int main(void)
//     {
//        int x = 99;

//        ft_printf("%p", &x);
//        printf("%p  ", &x);
//     //    printf("\n");

//        return (0);
//     }