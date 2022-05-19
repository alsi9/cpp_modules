/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:04:26 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:04:29 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
	target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &x) : Form(x.getName(), x.getSign(), x.getExecute())
{
	target = x.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &x)
{
	if (this != &x)
	{
		Form::operator=(x);
		target = x.getTarget();
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const
{
	return (target);
}

void RobotomyRequestForm::execute(const Bureaucrat &x) const
{
	if (x.getGrade() > getExecute())
		throw (Form::GradeTooLowException());
	else if (!getSgd())
		throw (Form::FormIsNotSigned());
	else
	{
		std::cout << "Drrr... drrrr... drrrrrr..." << std::endl;
		int success = std::rand() % 2;
		if (success == 1)
			std::cout << target << " has been robotomized" << std::endl;
		else
			std::cout << "Robotomy failed!" << std::endl;
	}
}
