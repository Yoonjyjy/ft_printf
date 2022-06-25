/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyoon <jiyoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:02:05 by jiyoon            #+#    #+#             */
/*   Updated: 2022/06/25 18:00:54 by jiyoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main(void) {
	int i = 0;
	int j = 0;

	printf("printf: ");
	i = printf("%c", 'h');
	printf(" / %d", i);

	printf("\n");

	ft_printf("ft_printf: ");
	j = ft_printf("%c", 'h');
	printf(" / %d", j);

	return (0);
}
