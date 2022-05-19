/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:00:42 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:00:45 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("noname"), grade(150) {}

Bureaucrat::Bureaucrat(std::string nname, int grade) : name(nname)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &x) : name(x.getName()), grade(x.getGrade()) {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &x)
{
	if (this != &x)
		grade = x.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
	return (name);
}

int Bureaucrat::getGrade() const
{
	return (grade);
}

void Bureaucrat::incrementGrade(void)
{
	if ((grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if ((grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}

std::ostream &operator<<(std::ostream &ost, const Bureaucrat &x)
{
	ost << x.getName() << ", bureaucrat grade " << x.getGrade() << std::endl;
	return (ost);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSgd())
		std::cout << "Bureaucrat " << name << " signed " << form.getName() << std::endl;
	else if (getGrade() > form.getSign())
		std::cout << "Bureaucrat " << name << " couldn't sign " << form.getName() << " because grade is too low!" << std::endl;
	else
		std::cout << "Bureaucrat " << name << " couldn't sign " << form.getName() << " yet" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << getName() << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &x)
	{
		std::cout << x.what() << std::endl;
	}
}
