/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:04:50 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:04:54 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
{
	target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &x) : Form(x.getName(), x.getSign(), x.getExecute())
{
	target = x.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &x)
{
	if (this != &x)
	{
		Form::operator=(x);
		target = x.getTarget();
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const
{
	return (target);
}

void ShrubberyCreationForm::execute(const Bureaucrat &x) const
{
	if (x.getGrade() > getExecute())
		throw (Form::GradeTooLowException());
	else if (!getSgd())
		throw (Form::FormIsNotSigned());
	else
	{
		std::ofstream file;
		file.open(target + "_shrubbery");

		if (!file.is_open())
		{
			std::cout << "Can't open file" << std::endl;
			return ;
		}
		else
		{

			file << ". .       .           .        .           . " << std::endl
				 << "   .          .          .     .            ." << std::endl
				 << "    .       .       *****    .        .   .  " << std::endl
				 << " .     .       . ***********                 " << std::endl
				 << "    .         ******************* .    .     " << std::endl
				 << "              *********************          " << std::endl
				 << "   .    .    ************************        " << std::endl
				 << "       .    *************************    .   " << std::endl
				 << "             **********************          " << std::endl
				 << "    .    .       *************      .        " << std::endl
				 << "                       00                    " << std::endl
				 << "    @@@@@      .     .  000          @@@@@   " << std::endl
				 << "   /////              0000      .   /////    " << std::endl
				 << "############################################?" << std::endl;
		}
		file.close();
	}
}
