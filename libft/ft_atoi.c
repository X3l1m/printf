/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 18:17:05 by seyildir      #+#    #+#                 */
/*   Updated: 2022/12/02 19:35:31 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	short int	sy;
	int			r;

	r = 0;
	i = 0;
	sy = 1;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if (str[i] == '-')
		sy = -sy;
	if (str[i] == '+' | str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		r = (r * 10) + (str[i++] - '0');
	return (r * sy);
}

/* int main()
{
char *n = "\t\v\f\r\n \f-06050";
int i1 = atoi(n);
int i2 = ft_atoi(n);

if (i1 == i2)
write(1, "yes", 3);
else
write(1, "no", 2);
} */