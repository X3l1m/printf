/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/21 17:58:25 by seyildir      #+#    #+#                 */
/*   Updated: 2022/12/02 19:54:45 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstl;
	size_t	srcl;

	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstsize <= dstl)
		return (srcl + dstsize);
	i = 0;
	while (src[i] && dstsize > dstl + i + 1)
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = 0;
	return (dstl + srcl);
}
