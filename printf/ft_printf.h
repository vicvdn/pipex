/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaudain <vvaudain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:40:04 by vvaudain          #+#    #+#             */
/*   Updated: 2023/12/18 16:26:13 by vvaudain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_strlen_printf(const char *str);
int		ft_nblen_ptr(unsigned long address);
int		ft_nblen(int nb);
char	*ft_strchr(const char *s, int c);
int		ft_printstrrev(char *str);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int i);
int		ft_check_base(char *base);
int		ft_printnbr_base(unsigned long long nbr, char *base);
int		ft_print_hexa(int i, const char format);
int		ft_print_ptr_hexa(unsigned long long nb, char *base);
int		ft_printf(const char *format, ...);

#endif