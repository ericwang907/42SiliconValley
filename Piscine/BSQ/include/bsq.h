/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 20:15:13 by aleung            #+#    #+#             */
/*   Updated: 2019/04/17 22:09:29 by aleung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>

void	printsolution();
void	skipfirstline(int *file);
void	updatemax(int x, int y);
void	calculatebsq(int *file, int x, int y);
void	createbsq(void);

#endif
