/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/29 18:36:19 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/30 15:54:47 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*(char *)(s + n) = 0;
}

/* int main()
{
	char d[]= "agamm";
	ft_bzero(d, 3);
	write(1, d, 7);
} */