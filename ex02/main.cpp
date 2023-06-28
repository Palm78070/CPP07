/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 03:10:14 by rthammat          #+#    #+#             */
/*   Updated: 2023/06/28 21:20:32 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//void printArr(Array<int> &arr)
//{
//	try
//	{
//		for (int i = 0; i < 6; ++i)
//		{
//			arr[i] = i;
//			std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
//		}
//	}
//	catch (Array<int>::OutOfBounds &e)
//	{
//		std::cout << e.what() << std::endl;
//	}
//}

//int main(void)
//{
//	Array<int> arr(5);
//	std::cout << arr.size() << std::endl;
//	printArr(arr);
//	std::cout << "\nTest object with no parameter" << std::endl;
//	Array<int> arr2;
//	std::cout << arr2.size() << std::endl;
//	printArr(arr2);
//	return (0);
//}
int	main(void) {
	try {
		Array<int>	a;
		Array<int>	b(3);
		Array<int>	c(-3);

		for (unsigned int i = 0; i < b.size(); i++) {
			b[i] = i;
		}
		for (unsigned int i = 0; i < b.size(); i++) {
			std::cout << "b["<< i << "] = " << b[i] << std::endl;
		}
		a = b;
		std::cout << std::endl;
		for (unsigned int i = 0; i < a.size(); i++) {
			std::cout << "a["<< i << "] = " << a[i] << std::endl;
		}

		std::cout << std::endl;
		std::cout << "a[1] = "<< a[1] << std::endl;

		std::cout << std::endl;
		Array<int> d(b);
		for (unsigned int i = 0; i < d.size(); i++) {
			std::cout << "d["<< i << "] = " << d[i] << std::endl;
		}
		Array<char> e(3);
		e[0] = 'a';
		e[1] = 'b';
		e[2] = 'c';
		for (unsigned int i = 0; i < e.size(); i++) {
			std::cout << "e["<<i<<"] = "<< e[i] << std::endl;
		}

		Array<std::string> f(1);
		f[0] = "hello";
		f[1] = "world";
		f[2] = "42";
		for (unsigned int i = 0; i < f.size(); i++) {
			std::cout << "f["<<i<<"] = "<< f[i] << std::endl;
		}
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
