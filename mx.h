/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mx.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-mazo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 22:00:55 by fel-mazo          #+#    #+#             */
/*   Updated: 2016/12/27 20:10:14 by fel-mazo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef mX_H
# define mX_H

# include <stdlib.h>
# include <math.h>
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
t_vint		*new_vector(int *list, size_t len);

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


#endif
