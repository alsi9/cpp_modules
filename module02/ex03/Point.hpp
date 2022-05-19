/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:56:11 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 19:56:14 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point();
        Point(const float x, const float y);
		Point (const Point &p);
		Point &operator=(const Point &p);
		~Point();
		Fixed const getX(void) const;
		Fixed const getY(void) const;

	private:
		Fixed const x;
		Fixed const y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
