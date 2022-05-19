/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:56:32 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 19:56:36 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
    Point	a(0.0f, 0.0f);
    Point	b(1.0f, 0.0f);
    Point	c(0.0f, 1.0f);

    Point	point_in(0.2f, 0.2f);
    Point	point_out(1.0f, 1.0f);
    Point	point(0.5f, 0.5f);

    std::cout << std::boolalpha;
    std::cout << "Point belongs to triangle: " << bsp(a, b, c, point_in) << std::endl;
    std::cout << "Point belongs to triangle: " << bsp(a, b, c, point_out) << std::endl;
    std::cout << "Point belongs to triangle: " << bsp(a, b, c, point) << std::endl;
    std::cout << "Point a belongs to triangle: " << bsp(a, b, c, a) << std::endl;
    std::cout << "Point b belongs to triangle: " << bsp(a, b, c, b) << std::endl;
    std::cout << "Point c belongs to triangle: " << bsp(a, b, c, c) << std::endl;
    return 0;
}

