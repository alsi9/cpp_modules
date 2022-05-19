/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:59:05 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 17:59:08 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat president("Vladimir", 1);
		std::cout << "Bureaucrat's name: " << president.getName() << ", grade's: " << president.getGrade() << std::endl;
		std::cout << president;
		president.decrementGrade();
		std::cout << president;
		president.incrementGrade();
		std::cout << president;
		std::cout << "-----------------------------------------------" << std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		std::cout << "Test1: grade 0: ";
		Bureaucrat test1("test1", 0);
		std::cout << test1 << std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		std::cout << "Test2: grade 151: ";
		Bureaucrat test2("test2", 151);
		std::cout << test2 << std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		Bureaucrat test3("test3", 1);
		std::cout << "Test3: ";
		test3.incrementGrade();
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	try
	{
		Bureaucrat test4("test4", 150);
		std::cout << "Test4: ";
		test4.decrementGrade();
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	return (0);
}
