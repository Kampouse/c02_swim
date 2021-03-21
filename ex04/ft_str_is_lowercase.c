/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_lowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:53:51 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/21 14:52:12 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase (char *str)
{
	char	*interator;

	interator = str;
	while (*interator != '\0')
	{
		if (*interator < 'a' || *interator > 'z')
			return (0);
		interator++;
	}
	return (1);
}
