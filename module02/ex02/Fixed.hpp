/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:54:30 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 19:54:33 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &x);
		~Fixed();

		void setRawBits( int const raw );
		int getRawBits( void ) const;

		Fixed &operator=(const Fixed &x);
		bool operator<(const Fixed &x) const;
		bool operator>(const Fixed &x) const;
		bool operator<=(const Fixed &x) const;
		bool operator>=(const Fixed &x) const;
		bool operator==(const Fixed &x) const;
		bool operator!=(const Fixed &x) const;

		Fixed operator+(const Fixed &x) const;
		Fixed operator-(const Fixed &x) const;
		Fixed operator*(const Fixed &x) const;
		Fixed operator/(const Fixed &x) const;

		Fixed &operator++();
		Fixed &operator--();
		const Fixed operator++(int);
		const Fixed operator--(int);

		float toFloat( void ) const;
		int toInt( void ) const;

		static Fixed &min(Fixed &x, Fixed &y);
		static const Fixed &min(const Fixed &x, const Fixed &y);
		static Fixed &max(Fixed &x, Fixed &y);
		static const Fixed &max(const Fixed &x, const Fixed &y);

	private:
		int fix;
		static const int constint;
};

std::ostream &operator << (std::ostream &out, const Fixed &x);

#endif
