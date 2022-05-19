/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:04:02 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:04:06 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &x) : Form(x.getName(), x.getSign(), x.getExecute())
{
	target = x.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &x)
{
	if (this != &x)
	{
		Form::operator=(x);
		target = x.getTarget();
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const
{
	return (target);
}

void PresidentialPardonForm::execute(const Bureaucrat &x) const
{
	if (x.getGrade() > getExecute())
		throw (Form::GradeTooLowException());
	else if (!getSgd())
		throw (Form::FormIsNotSigned());
	else
		std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
