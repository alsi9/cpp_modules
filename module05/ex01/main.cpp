/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:00:23 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:00:27 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		std::cout << std::boolalpha;
		Bureaucrat president("Vladimir", 1);
		std::cout << president;

		Form form("list", 5, 150);
		std::cout << form;

		form.beSigned(president);
		president.signForm(form);
		std::cout << form;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	try
	{
		std::cout << "\n" << std::endl;

		Bureaucrat director("Ivan", 50);
		std::cout << director;

		Form form2("form", 1, 150);
		std::cout << form2;

		director.signForm(form2);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	try
	{
		std::cout << "\n-------Test1----------" << std::endl;
		Form test1("form1", 200, 100);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	try
	{
		std::cout << "\n-------Test2----------" << std::endl;
		Form test2("form2", 100, 0);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	return (0);
}
