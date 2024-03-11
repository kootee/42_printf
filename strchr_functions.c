/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktoivola <ktoivola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 14:32:21 by ktoivola          #+#    #+#             */
/*   Updated: 2023/11/27 17:05:48 by ktoivola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
	{
		if (0 > write(1, "(null)", 6))
			return (-1);
		return (6);
	}
	len = ft_strlen(s);
	if (0 > write(1, s, len))
		return (-1);
	return (len);
}

int	ft_putchar(char c)
{
	return (write(1, &c, sizeof(char)));
}
