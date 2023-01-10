/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 21:46:54 by seyildir      #+#    #+#                 */
/*   Updated: 2022/11/26 21:52:42 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && n > i + 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "aeanema";
	char b[] = "deaneme";
	int s = 0;
	printf("%d\n", ft_strncmp(a, b, s));
	printf("%d\n", strncmp(a, b, s));
} */