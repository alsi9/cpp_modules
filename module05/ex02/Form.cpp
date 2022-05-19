/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:01:00 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:01:03 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("noname"), sgd(false), sign(1), exec(150) {}

Form::Form(const std::string nname, int ssign, int eexecute) : name(nname), sgd(false), sign(ssign), exec(eexecute)
{
	if (sign > 150 || exec > 150)
		throw (Form::GradeTooLowException());
	else if (sign < 1 || exec < 1)
		throw (Form::GradeTooHighException());

}

Form::Form(const Form &x) : name(x.getName()), sgd(x.getSgd()), sign(x.getSign()), exec(x.getExecute()) {}

Form &Form::operator=(const Form &x)
{
	if (this != &x)
		sgd = x.getSgd();
	return (*this);
}

Form::~Form() {}

std::string Form::getName() const
{
	return (name);
}

bool Form::getSgd() const
{
	return (sgd);
}

int Form::getSign() const
{
	return (sign);
}

int Form::getExecute() const
{
	return (exec);
}

void Form::beSigned(Bureaucrat &br)
{
	if (br.getGrade() > sign)
		throw (Form::GradeTooLowException());
	else if (!sgd)
		sgd = true;
}

const char * Form::FormIsNotSigned::what() const throw()
{
	return ("Form not signed!");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream &operator<<(std::ostream &ost, const Form &x)
{
	ost << "----------Form-------------\n" << "Form name : " << x.getName() << "\n" << "Form is signed: " << x.getSgd() << "\n"
		<< "Grade required to sign form: " << x.getSign() << "\n" << "Grade required to execute: "
		<< x.getExecute() << "\n---------------------------" << std::endl;
	return (ost);
}
