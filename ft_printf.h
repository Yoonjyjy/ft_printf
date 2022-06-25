/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:43:36 by jiyoon            #+#    #+#             */
/*   Updated: 2022/06/25 17:56:32 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> // size_t(ft_strlen), malloc(calloc, strdup)
# include <unistd.h> // write(ft_*_fd)
# include <stdarg.h> // 가변인자 사용

/*
** ft_printf.c
*/
int		ft_printf(const char *arg, ...);

/*
** ft_libft.c
*/
int		ft_putchar(char c);

#endif