/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfontani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:35:58 by kfontani          #+#    #+#             */
/*   Updated: 2024/07/29 17:47:12 by kfontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	abs(int value)
{
	if (value < 0)
		return (-(value));
	else
		return (value);
}
# define ABS(Value) (abs(Value))

#endif