/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 23:42:13 by rthammat          #+#    #+#             */
/*   Updated: 2023/06/28 21:01:51 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

//int main(void)
//{
//	int arr[] = {1, 2, 3, 4, 5};
//	iter(arr, 5, &plus1);
//	iter(arr, 5, &print);

//	std::string arr2[] = {"abc", "def", "ghi"};
//	iter(arr2, 3, &print);

//	return (0);
//}

//template <typename T>
//void print(const T& x)
//{
//    std::cout << x << " ";
//}

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4, 5};
  Awesome tab2[6];

  iter( tab, 6, print<const int> );
  iter( tab2, 6, print<Awesome> );
  return 0;
}
