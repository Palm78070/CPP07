/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 02:03:52 by rthammat          #+#    #+#             */
/*   Updated: 2023/06/28 21:16:37 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
public:
	Array(void) : _arr(new T[0]()), _size(0){};
	Array(const unsigned int size) : _arr(new T[size]()), _size(size){};
	Array(const Array &src)
	{
		*this = src;
	};
	Array &operator=(const Array &src)
	{
		if (this != &src)
		{
			if (_arr)
				delete[] _arr;
			_size = src._size;
			_arr = new T[_size]();
			for (unsigned int i = 0; i < _size; ++i)
				_arr[i] = src._arr[i];
		}
		return (*this);
	};
	T &operator[](unsigned int index)
	{
		if (index < 0 || index >= _size)
			throw OutOfBounds();
		return (_arr[index]);
	};
	~Array() { delete[] _arr; };

	class OutOfBounds : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "Out of bounds"; };
	};
	unsigned int size(void) { return (_size); };

private:
	T *_arr;
	unsigned int _size;
};

#endif
