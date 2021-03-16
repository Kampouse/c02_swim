/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:41:21 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/16 10:54:22 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strncpy(char *origin, unsigned int lenght, char *target)
{
	unsigned int	iterator;

	iterator = 0;
	while (iterator++ != lenght)
	{
		iterator++;
		target = origin;
		origin ++;
		target ++;
	}
	return (*target);
}
