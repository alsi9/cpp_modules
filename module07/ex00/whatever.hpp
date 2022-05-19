/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:41:39 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/15 13:41:43 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
    T z = x;
    x = y;
    y = z;
}

template <typename T>
const T &min(const T &x, const T &y)
{
    if (x < y)
        return (x);
    else
        return (y);
}

template <typename T>
const T &max(const T &x, const T &y)
{
    if (x > y)
        return (x);
    else
        return (y);
}

//class Awesome
//{
//	public:
//		Awesome(void) : _n(0) {}
//		Awesome( int n) : _n( n ) {}
//		Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
//		bool operator==( Awesome const & rhs) const { return (this->_n == rhs._n); }
//		bool operator!=(Awesome const & rhs) const{ return (this->_n != rhs._n); }
//		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//		bool operator>=( Awesome const & rhs) const { return (this->_n >= rhs._n); }
//		bool operator<=(Awesome const & rhs) const { return (this->_n <= rhs._n); }
//		int get_n() const { return _n; }
//	private:
//		int _n;
//};
//
//std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

#endif
