/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:03:30 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:03:33 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &x)
{
	*this = x;
}
Intern &Intern::operator=(const Intern &x)
{
	if (this == &x)
		return (*this);
	return (*this);
}

Intern::~Intern() {}

Form *Intern::makeForm(std::string name, std::string target)
{
	std::string array[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i = 0;
	while (name != array[i] && i < 3)
		i++;
	switch (i)
	{
		case 0: std::cout << "Intern creates ShrubberyCreationForm" << std::endl; return (new ShrubberyCreationForm(target));
		case 1: std::cout << "Intern creates RobotomyRequestForm" << std::endl; return (new RobotomyRequestForm(target));
		case 2: std::cout << "Intern creates PresidentialPardonForm" << std::endl; return (new PresidentialPardonForm(target));
	}
	throw (Intern::FormNotFound());
}

const char *Intern::FormNotFound::what() const throw()
{
	return ("Format not found!");
}
