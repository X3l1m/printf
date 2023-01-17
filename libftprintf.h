/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: seyildir <seyildir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/17 16:22:03 by seyildir      #+#    #+#                 */
/*   Updated: 2023/01/17 18:40:14 by seyildir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_P_H
# define LIBFT_P_H

# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>

int ft_printf(const char *typef, ...);
int	flg_char(va_list arg);
int	flg_string(va_list arg);

#endif