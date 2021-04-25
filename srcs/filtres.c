/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filtres.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoelguer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 12:06:27 by yoelguer          #+#    #+#             */
/*   Updated: 2021/04/21 12:06:29 by yoelguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./rt.h"

void	filtres(t_rt *rt)
{
	if (rt->filter_type == 1)
		filter_mb(rt);
	if (rt->filter_type == 2)
		filtre_sepia(rt);
}