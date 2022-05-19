/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:02:38 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:02:41 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	try
	{
		std::cout << std::boolalpha;
		ShrubberyCreationForm form1("Home");
		std::cout << form1;

		RobotomyRequestForm form2("Robot");
		std::cout << form2;

		PresidentialPardonForm form3("Pardon");
		std::cout << form3;

		Bureaucrat admin("Vlad", 1);
		std::cout << admin;

		form1.beSigned(admin);
		admin.signForm(form1);
		admin.executeForm(form1);

		std::string name;
		std::ifstream file;
		file.open(form1.getTarget() + "_shrubbery");
		if (file.is_open())
		{
			std::getline(file, name, '?');
			std::cout << name << std::endl;
			file.close();
		}

		form2.beSigned(admin);
		admin.signForm(form2);
		admin.executeForm(form2);

		form3.beSigned(admin);
		admin.signForm(form3);
		admin.executeForm(form3);
	}

	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	std::cout << "---------------------------------TEST-----------------------------------------" << std::endl;
	Bureaucrat president("Vladimir", 71);
	std::cout << president;

	ShrubberyCreationForm form1("home");
	std::cout << form1;

	RobotomyRequestForm form2("robot");
	std::cout << form2;

	PresidentialPardonForm form3("pardon");
	std::cout << form3;

	try
	{
		std::cout << "----------test1(NOT SIGNED)----------" << std::endl;
		president.signForm(form1);
		president.executeForm(form1);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
	try
	{
		std::cout << "----------test2(sign(YES) and exec(NO))----------" << std::endl;
		form2.beSigned(president);
		president.signForm(form2);
		president.executeForm(form2);
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}

	return (0);
}
