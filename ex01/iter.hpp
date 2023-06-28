/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:26:52 by rthammat          #+#    #+#             */
/*   Updated: 2023/06/28 21:02:49 by rthammat         ###   ########.fr       */
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
void print(const T &src)
{
	std::cout << src << std::endl;
}

template <typename T>
void iter(T *arr, int len, void (*f)(const T &src))
{
	for (int i = 0; i < len; ++i)
		f(arr[i]);
}

#endif
