/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanson <hanson@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:56:30 by hanson            #+#    #+#             */
/*   Updated: 2022/02/19 13:45:51 by hanson           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
