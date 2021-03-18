/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jean-phil <jemartel@student.42quebec>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:45:57 by jean-phil         #+#    #+#             */
/*   Updated: 2021/03/18 12:53:49 by jean-phil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*strong;

	strong = str;
	while (*strong != '\0')
	{
		if (*strong >= 'A' && *strong <= 'Z')
			*strong = *strong + 32;
		strong++;
	}
	return (str);
}
