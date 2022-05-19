/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:41:30 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/15 13:41:33 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void )
{
	{
		int a = 2;
		int b = 3;

		std::cout << "-----------INT----------" << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;


		std::cout << "-----------STRING----------" << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

		std::cout << "-----------CHAR----------" << std::endl;
		char e = 'a';
		char f = 'z';

		::swap(e, f);
		std::cout << "e = " << e << ", f = " << f << std::endl;
		std::cout << "min( a, z ) = " << ::min(e, f) << std::endl;
		std::cout << "max( a, z ) = " << ::max(e, f) << std::endl;
	}
//	{
//		std::cout << "-----------AWESOME----------" << std::endl;
//		Awesome p(2);
//		Awesome o(4);
//
//		swap(p, o);
//		std::cout << p << " " << o << std::endl;
//		std::cout << "Max: " << max(p, o) << std::endl;
//		std::cout << "Min: " << min(p, o) << std::endl;
//	}

    return 0;
}

