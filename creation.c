/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creation.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 22:19:35 by fel-mazo          #+#    #+#             */
/*   Updated: 2016/12/27 20:09:00 by fel-mazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mx.h"

t_mxint		*new_matrix(size_t rows, size_t cols)
{
	t_mxint		*ret;

	ret = (t_mxint *)malloc(sizeof(t_mxint));
	if (ret)
	{
		ret->rows = rows;
		ret->cols = cols;
		if ((ret->data = (int **)malloc(rows * sizeof(int *))))
			while (rows--)
				ret->data[rows] = (int *)ft_memalloc(cols * sizeof(int));
	}
	return (ret);
}

t_vint		*new_vector(int *list, size_t len)
{
	t_vint	*ret;

	ret = (t_vint *)ft_memalloc(sizeof(t_vint));
	if (!ret)
		return (NULL);
	ret->len = len;
	ret->data = (int *)ft_memalloc(sizeof(int) * len);
	if (list)
		while (len--)
			ret->data[len] = list[len];
	return (ret);
}

t_mxint		*eye(size_t n)
{
	size_t	i;
	size_t	j;
	t_mxint	*ret;

	ret = new_matrix(n, n);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (i == j)
				ret->data[i][j] = 1;
			++j;
		}
		++i;
	}
	return (ret);
}

t_mxint		*t(t_mxint *m)
{
	size_t		i;
	size_t		j;
	t_mxint		*ret;

	ret = new_matrix(m->cols, m->rows);
	i = 0;
	while (i < ret->rows)
	{
		j = 0;
		while (j < ret->cols)
		{
			ret->data[i][j] = m->data[j][i];
			++j;
		}
		++i;
	}
	return (ret);
}

t_mxint		*diag(t_vint *v)
{
	t_mxint		*ret;
	size_t		i;
	size_t		j;
	size_t		a;

	i = 0;
	a = 0;
	ret = new_matrix(v->len, v->len);
	while (i < v->len)
	{
		j = 0;
		while (j < v->len)
		{
			if (i == j)
				ret->data[i][j] = v->data[i];
			++j;
		}
		++i;
	}
	return (ret);
}
