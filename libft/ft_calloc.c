/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/19 19:44:51 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/23 18:07:26 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = (void *) malloc (size * count);
	if (!mem)
		return (NULL);
	ft_bzero(mem, count * size);
	return (mem);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	int *a = (int*) ft_calloc(NULL, NULL);
	*a = 52;
	printf("%d\n%p\n",*a ,a);
	write(1, a, 10);
} */