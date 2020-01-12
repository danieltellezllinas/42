/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtellez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 20:24:02 by dtellez-          #+#    #+#             */
/*   Updated: 2019/10/23 20:24:05 by dtellez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_data
{
	char 	empty;
	char 	obs;
	char 	fill;
	char 	**matrix;
	char 	*header;
	char	*numb;	
	char	*buffer;
	int		pos_R_max;
	int		pos_C_max;
}				t_map;
void	read(void);
void	str_to_int(void);
void	num_lines(void);
void	matrix_declaration(void);
char	*create_header(void);

#endif
