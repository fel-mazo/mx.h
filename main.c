/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 11:20:22 by fel-mazo          #+#    #+#             */
/*   Updated: 2016/12/29 18:28:06 by fel-mazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mx.h"
#include <stdio.h>

int		main(void)
{
	t_mxint		*a;
	t_mxint		*b;
	t_mxint		*res;

	a = new_matrix(3, 1);
	b = new_matrix(1, 3);
	a->data[0][0] = 1;
	a->data[1][0] = 2;
	a->data[2][0] = 3;

	b->data[0][0] = 4;
	b->data[0][1] = 5;
	b->data[0][2] = 6;

	res = matrix_multi(a, b);

	print_matrix(a);
	print_matrix(b);
	print_matrix(res);

	return (0);
}
