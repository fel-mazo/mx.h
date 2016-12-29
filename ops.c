/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/29 16:12:47 by fel-mazo          #+#    #+#             */
/*   Updated: 2016/12/29 18:30:28 by fel-mazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mx.h"

t_mxint		*add_matrix(t_mxint *to, t_mxint *from)
{
	size_t	i;
	size_t	j;

	if (!to || !from || to->rows != from->rows || to->cols != from->cols)
		return (NULL);
	i = 0;
	while (i < to->rows)
	{
		j = 0;
		while (j < to->cols)
		{
			to->data[i][j] += from->data[i][j];
			++j;
		}
		++i;
	}
	return (to);
}

t_mxint		*add_scal(t_mxint *a, int x)
{
	size_t	i;
	size_t	j;

	if (!a)
		return (NULL);
	i = 0;
	while (i < a->rows)
	{
		j = 0;
		while (j < a->cols)
		{
			a->data[i][j] += x;
			++j;
		}
		++i;
	}
	return (a);
}

t_mxint		*scale_matrix(t_mxint *a, int x)
{
	size_t	i;
	size_t	j;

	if (!a)
		return (NULL);
	i = 0;
	while (i < a->rows)
	{
		j = 0;
		while (j < a->cols)
		{
			a->data[i][j] *= x;
			++j;
		}
		++i;
	}
	return (a);
}

t_mxint		*matrix_multi(t_mxint *a, t_mxint *b)
{
	size_t		i;
	size_t		j;
	size_t		k;
	t_mxint		*res;

	if (!a || !b || a->cols != b->rows)
		return (NULL);
	if (!(res = new_matrix(a->rows, b->cols)))
		return (NULL);
	i = 0;
	while (i < res->rows)
	{
		j = 0;
		while (j < res->cols)
		{
			k = -1;
			while (++k < a->cols)
				res->data[i][j] += a->data[i][k] * b->data[k][j];
			++j;
		}
		++i;
	}
	return (res);
}
