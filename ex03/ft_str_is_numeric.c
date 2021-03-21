/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:32:13 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/21 15:05:07 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric (char *str)
{
	char	*iterator;

	iterator = str;
	while (*iterator)
	{
		if (*iterator < '0' || *iterator > '9')
			return (0);
		iterator++;
	}
	return (1);
}
