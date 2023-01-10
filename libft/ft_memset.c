/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 15:27:01 by seyildir      #+#    #+#                 */
/*   Updated: 2022/12/02 19:50:46 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		*(unsigned char *)(b + i++) = (unsigned char)c;
	return (b);
}

/* #include <stdio.h>
int main()
{
	char b[] = "ff";
	int c = 'a';
	printf("%s", ft_memset(b, c, 2));
} */