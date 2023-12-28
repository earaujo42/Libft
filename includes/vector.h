/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earaujo <earaujo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:20:29 by earaujo           #+#    #+#             */
/*   Updated: 2023/12/28 17:11:40 by earaujo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

#include "stdlib.h"

typedef struct s_vector
{
    size_t  elemsize;
    size_t  allocated;
    void    *array;
}   t_vector;


#endif
