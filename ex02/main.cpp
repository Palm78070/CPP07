/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 03:10:14 by rthammat          #+#    #+#             */
/*   Updated: 2023/06/28 20:54:44 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void printArr(Array<int> &arr)
{
	try
	{
		for (int i = 0; i < 6; ++i)
		{
			arr[i] = i;
			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
		}
	}
	catch (Array<int>::OutOfBounds &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	Array<int> arr(5);
	std::cout << arr.size() << std::endl;
	printArr(arr);
	std::cout << "\nTest object with no parameter" << std::endl;
	Array<int> arr2;
	std::cout << arr2.size() << std::endl;
	printArr(arr2);
	return (0);
}
