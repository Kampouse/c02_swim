/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:41:21 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 13:10:06 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *target, char *origin, unsigned int lenght)

{
	unsigned int	iterator;

	iterator = 0;
	while (origin[iterator] && iterator < lenght)
	{
		target[iterator] = origin[iterator];
		iterator++;
	}
	while (iterator < lenght)
	{
		target[iterator] = '\0';
		iterator++;
	}
	return (target);
}
