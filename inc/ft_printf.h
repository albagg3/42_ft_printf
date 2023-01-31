/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 17:20:04 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/28 16:48:33 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(long n);
int		ft_print_character(int n);
int		ft_printf(const char *str, ...);
int		ft_identify_format(va_list arg, char c);
int		ft_print_string(char *str);
//int	ft_print_pointer(va_list arg);
int		ft_hexa_lower(unsigned long n);
int		ft_hexa_len(unsigned long n);
int		ft_hexa_upper(unsigned long n);
int		ft_nbr_len(long n);
int		ft_pointer(unsigned long long n);

#endif
