/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:52:19 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 19:52:23 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::constint = 8;

Fixed::Fixed() : fix(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &x)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = x;
}

Fixed &Fixed::operator = (const Fixed &x)
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
    std::cout << "getRawBits member function called" << std::endl;
    return (fix);
}
void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    fix = raw;
}

