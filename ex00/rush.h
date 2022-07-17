/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddjoehan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:30:14 by ddjoehan          #+#    #+#             */
/*   Updated: 2022/07/17 19:25:58 by ddjoehan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

void	ft_putchar(char c);

int		check(int ac, char **av);

int		check_case(int tab[4][4], int pos, int entry[16]);

int		check_duplicate(int tab[4][4], int pos, int entry[16]);

int		ft_atoi(char *str);

int		*get_numbers(char *str);

#endif
