/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:53:13 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 19:53:20 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::constint = 8;

Fixed::Fixed() : fix(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    std::cout << "Int constructor called" << std::endl;
    setRawBits(number << constint);

}

Fixed::Fixed(const float number)
{
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(number * (1 << constint)));
}

Fixed::Fixed(const Fixed &x)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = x;
}

Fixed &Fixed::operator=(const Fixed &x)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (&x != this)
        fix = x.getRawBits();
    return (*this);
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return (fix);
}
void Fixed::setRawBits( int const raw )
{
    fix = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float)(getRawBits() / (float)(1 << constint)));
}

int Fixed::toInt( void ) const
{
    return ((int)(getRawBits() >> constint));
}

std::ostream &operator << (std::ostream &out, const Fixed &x)
{
    out << x.toFloat();
    return (out);
}
