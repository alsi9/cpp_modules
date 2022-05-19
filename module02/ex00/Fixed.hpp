/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:52:28 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 19:52:32 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &x);
        Fixed &operator = (const Fixed &x);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );

    private:
        int fix;
        static const int constint;
};

#endif
