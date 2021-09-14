/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 21:50:47 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/27 22:08:34 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_strputchar(char *str);
int		ft_strlen(char *num);
int		ft_atoi(char *num);

int		ft_testnum (char *argc);
int		ft_unsigned(long int num);
int		validate(char *num);

void	block_finder(int nblock, char num, char numaux, char *buf);

void	ft_print (char *aprn, int size);
void	numberSet (char *arr, int size, char *arbuf);

void	ft_leerdic(char *arr, int size);

void	find_one_digit(char nbr, char *arbuf);
void	find_teens_digits(char nbr, char nbru, char *arbuf);
void	find_two_digits(char nbr, char *arbuf);

#endif
