/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatalan@student.42barcelona.com <mcata    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:59:01 by mcatalan@st       #+#    #+#             */
/*   Updated: 2023/07/05 17:44:00 by mcatalan@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

// ft_printf.c
int				ft_printf(const char *str, ...);
int				read_str(const char *str, va_list args, int cc);
int				filter_flags(char c, va_list args);

// ft_putchar_m.c
int				ft_putchar_m(char c);

// ft_putstr_m.c
int				ft_putstr_m(char *str);

#endif