/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:26:52 by rthammat          #+#    #+#             */
/*   Updated: 2023/06/27 01:05:06 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <vector>

template <typename T>
void plus1(T &src)
{
	src += 1;
}

template <typename T>
void print(T &src)
{
	std::cout << src << std::endl;
}

template <typename T>
void iter(T *arr, int len, void (*f)(T &src))
{
	for (int i = 0; i < len; ++i)
		f(arr[i]);
}

#endif
