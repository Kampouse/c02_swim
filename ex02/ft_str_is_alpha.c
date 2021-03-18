/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:03:56 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 11:33:16 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha (char *str)
{
	int		iterator;
	int		value;	

	iterator = 0;
	value = 0;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			value = 1;
		else if (*str >= 'A' && *str <= 'Z')
			value = 1;
		else if (*str == '\0' )
			value = 1;
		else
			value = 0;
		str++;
	}
	return (value);
}
