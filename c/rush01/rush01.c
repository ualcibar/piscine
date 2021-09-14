/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 19:21:19 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/20 18:37:21 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	prtBoard(int board[4][4])
{
	int x; 
	int y;
	int a;

	x = 0;
	y = 0;
	while (x <= 3)
	{
		while(y <= 3)
		{
			a = board[x][y] + '0';
			write(1, &a, 1);
			write(1, " ", 1);
			y++;
		}
		y = 0;
		x++;
		write(1, "\n", 1);
	}
}

int setRules (char *rules, int pos)
{
	int rule;

	rule = (rules[pos]);	
	/*	static int rulesArray[16];
	int i;
	int x;

	i = 0;
	x = 0;
	while (rules[i] != '\0')
	{
		if(rules[i] != 32)
		{
			rulesArray[x] = rules[i];
			x++;
		}
		i++;
	}
	return (rulesArray);*/
	return (rule - 48);
}

int	main(int argc, char *argv[])
{
	int rulesSet;
	int *rules[16];
	int i;
	int d;
	char *string;

	i = 0;
	d = 0;
	string = argv[1];
	int board[4][4]= {
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}};
	rulesSet = setRules(argv[1], 0);
	prtBoard(board);
	while(string[i] != '\0')
	{
		rulesSet = setRules(argv[1], i);
		rules[d] = &rulesSet;
		i += 2;
		d ++;
	}
	printf("%d", *rules[3]);
}
