/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 19:13:30 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/21 14:54:51 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *input)
{
	char	*iterator;

	iterator = input;
	while (*iterator != '\0')
	{	
		if (*iterator <= 31 || *iterator == 127)
			return (0);
		  iterator++;
	}	
	return (1);
}
