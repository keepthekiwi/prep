/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skillian <skillian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:08:31 by exam              #+#    #+#             */
/*   Updated: 2022/03/10 16:13:00 by skillian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H							// dran denken!!! (Grossschreibung??)
# define FT_LIST_H							// dran denken!!!

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif										// dran denken!!!
