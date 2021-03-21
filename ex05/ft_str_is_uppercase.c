/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_uppcase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 17:35:50 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/21 14:53:05 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	*iterator;

	iterator = str;
	while (*iterator != '\0' )
	{
		if (*iterator < 'A' || *str > 'Z')
			return (0);
		iterator++;
	}
	return (1);
}
