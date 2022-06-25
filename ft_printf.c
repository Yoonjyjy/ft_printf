/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 12:34:36 by jiyoon            #+#    #+#             */
/*   Updated: 2022/06/25 18:13:34 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conversions(const char *c, va_list ap, int *r)
{
	if (*c == 'c') 
		{
			ft_putchar(va_arg(ap, int));
			(*r)++;
		}
	else if (*c == 's') {}
	else if (*c == 'p') {}
	else if (*c == 'd') {}
	else if (*c == 'i') {}
	else if (*c == 'u') {}
	else if (*c == 'x') {}
	else if (*c == 'X') {}
	else if (*c == '%') ft_putchar('%');
	else {}
}
	// va_arg(ap, 인수타입);

int	ft_printf(const char *arg, ...)
{
	va_list	ap;
	int		ret;

	ret = 0;
	va_start(ap, arg);
	while (*arg)
	{
		if (*arg == '%') // % 어쩌구가 들어갈 경우 그 뒤를 읽고 해당하는 뒤의 인자를 넣어줌
		{
			arg++;
			if (*arg == '\0')
				return (ret);
			conversions(arg, ap, &ret);
		}
		else // 그냥 문자일 경우 고대로 출력쓰
		{
			ft_putchar(*arg);
			ret++;
		}
		arg++;
	}
	va_end(ap);
	return (ret);
}
//ex: printf("%s %d \n", "hello world ", 123);
