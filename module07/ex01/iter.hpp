/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:42:11 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/15 13:42:17 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, int size, void (*f)(const T &x))
{
    for (int i = 0; i < size; i++)
        (*f)(arr[i]);
}

template <typename T>
void print(const T &x)
{
    std::cout << x << std::endl;
}

//class Awesome
//{
//	public:
//		Awesome( void ) : _n( 42 ) { return; }
//		int get(void ) const { return this->_n; }
//	private:
//		int _n;
//};
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }


#endif
