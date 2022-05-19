/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:56:02 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 19:56:05 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float xx, const float yy) : x(xx), y(yy) {}

Point::Point (const Point &p) : x(p.getX()), y(p.getY()) {}

Point &Point::operator=(const Point &p)
{
    if (this == &p)
        return (*this);
    return (*this);
}

Point::~Point() {}

Fixed const Point::getX(void) const
{
	return (x);
}

Fixed const Point::getY(void) const
{
	return (y);
}
