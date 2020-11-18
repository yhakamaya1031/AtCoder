/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakamay <yhakamay@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:30:38 by yhakamay          #+#    #+#             */
/*   Updated: 2020/11/16 13:11:43 by yhakamay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void) {
	double	s1, s2, g1, g2, ans;

	scanf("%lf %lf %lf %lf", &s1, &s2, &g1, &g2);
	ans = ((s1 - g1) * (g2 / (g2 + s2))) + g1;
	printf("%.10lf", ans);
	return 0;
}