/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 10:35:24 by fel-mazo          #+#    #+#             */
/*   Updated: 2016/12/29 15:19:13 by fel-mazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mx.h"

void		print_matrix(t_mxint *m)
{
	size_t	i;
	size_t	j;

	i = 0;
	ft_putchar('[');
	while (i < m->rows)
	{
		j = 0;
		while (j < m->cols)
		{
			ft_putchar(' ');
			ft_putnbr(m->data[i][j]);
			ft_putchar(',');
			++j;
		}
		if (i < m->rows - 1)
			ft_putchar('\n');
		++i;
	}
	ft_putstr("]\n");
}

void		free_matrix(t_mxint	**m)
{
	if (!m)
		return ;
	while ((*m)->rows--)
		free((*m)->data[(*m)->rows]);
	free((*m)->data);
	free(*m);
	*m = NULL;
}

void		print_vector(t_vint *v)
{
	size_t	i;

	i = 0;
	ft_putchar('(');
	while (i < v->len)
	{
		ft_putchar(' ');
		ft_putnbr(v->data[i]);
		ft_putchar(',');
		++i;
	}
	ft_putstr(")\n");
}

void		free_vect(t_vint **v)
{
	if(!v || !(*v))
		return ;
	free((*v)->data);
	free(*v);
	*v = NULL;
}
