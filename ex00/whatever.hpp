/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:45:50 by rthammat          #+#    #+#             */
/*   Updated: 2023/06/28 17:17:05 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template <typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
