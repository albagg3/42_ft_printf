/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_string                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:23:32 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/29 10:10:11 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_putchar(char c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		if (write(1, "(null)", 6) != 6)
			return (-1);
		return (6);
	}
	while (s[len] != '\0')
	{
		if (ft_putchar(s[len]) == -1)
			return (-1);
		len++;
	}
	return (len);
}

int	ft_print_character(int n)
{
	if (ft_putchar(n) == -1)
		return (-1);
	return (1);
}

int	ft_print_string(char *str)
{
	return (ft_putstr(str));
}
