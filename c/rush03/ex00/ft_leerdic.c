/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leerdic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 21:57:54 by ualcibar          #+#    #+#             */
/*   Updated: 2021/06/27 22:15:12 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_leerdic(char *arr, int size)
{
	int		i;
	int		filedesc;
	ssize_t	nrbytes;
	int		mpsize;

	mp = (char*)malloc (mpsize * sizeof (int));
	filedesc = open("./numbers.dict", O_RDONLY);
	if (filedesc == -1)
		ft_print ("Error al abrir el archivo", 27);
	else
	{
		nrbytes = read(filedesc, mp, 691);
		close (filedesc);
		if (nrbytes == 0)
			ft_print ("Archivo vacio", 14);
		else
			numberSet(arr, mp);
	}
}
