/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:51:25 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/19 11:51:29 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

int main()
{
	std::cout << "-----------------Subject------------------" << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		std::cout << "-----------Test(NEW addNumber)------------" << std::endl;

		Span ar(4);
		std::vector<int> lst;

		for (int i = 1; i <= 4; i++)
			lst.push_back(i + 10);

		ar.addNumber(lst.begin(), lst.end());

		for (std::vector<int>::iterator i = ar.getArr().begin(); i != ar.getArr().end(); ++i)
			std::cout << *i << std::endl;

		std::cout << "Shortest Span: " << ar.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << ar.longestSpan() << std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		std::cout << "------------------My test-----------------" << std::endl;
		Span arr(4);

		arr.addNumber(10);
		arr.addNumber(1000);
		arr.addNumber(15);
		arr.addNumber(85);

		std::cout << "Longest Span: " << arr.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << arr.shortestSpan() << std::endl;

	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		std::cout << "---------My test(10 000 element)----------" << std::endl;
		std::srand(time(0));
		Span span(10000);

		for (int i = 0; i < 10000; i++)
			span.addNumber(rand());
		std::cout  << "Longest Span: " << span.longestSpan() << std::endl;
		std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;

	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		std::cout << "---------------Test(full)----------------" << std::endl;
		Span test(2);

		test.addNumber(1);
		test.addNumber(-2);
		test.addNumber(10);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		std::cout << "------------Test(one_element)-------------" << std::endl;
		Span one(1);

		one.addNumber(1);
		std::cout << one.longestSpan() << std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		std::cout << "---------------Test(zero)-----------------" << std::endl;
		Span tes(0);

		tes.addNumber(1);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	return 0;
}

