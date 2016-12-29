/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mx.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 22:00:55 by fel-mazo          #+#    #+#             */
/*   Updated: 2016/12/30 00:56:40 by fel-mazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef mX_H
# define mX_H

# include <stdlib.h>
# include <math.h>

/*
** Path to libft
*/

# include "lib_subset/libft.h"

typedef struct		s_mxint
{
	size_t			rows;
	size_t			cols;
	int				**data;
}					t_mxint;

typedef struct		s_vint
{
	size_t			len;
	int				*data;
}					t_vint;

/*
 * makes a matrix and initializes all fields to 0 
*/
t_mxint		*new_matrix(size_t rows, size_t cols);

/*
 * makes a vector and populates it
*/
t_vint		*new_vector(int val, size_t len);

/*
 * makes an identity matrix of size n
*/
t_mxint		*eye(size_t n);

/*
 * returns the transpose of a matrix
*/
t_mxint		*t(t_mxint *m);

/*
 * prints a matrix (will be optimized later to have one write call)
*/
void		print_matrix(t_mxint *m);

void		print_vector(t_vint *v);

/*
 * frees a matrix
*/
void		free_matrix(t_mxint **m);

/*
 * frees a vector
*/
void		free_vector(t_vint **v);

/*
 * makes a diagonal matrix
*/
t_mxint		*diag(t_vint *v);

t_mxint		*add_matrix(t_mxint *to, t_mxint *from);

t_mxint		*add_scal(t_mxint *a, int x);

t_mxint		*scale_matrix(t_mxint *a, int x);

t_mxint		*matrix_multi(t_mxint *a, t_mxint *b);


#endif
