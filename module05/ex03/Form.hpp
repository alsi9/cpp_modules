/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:03:18 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:03:23 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <fstream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sgd;
		const int sign;
		const int exec;

	public:
		Form();
		Form(const std::string nname, int ssign, int eexecute);
		Form(const Form &x);
		Form &operator=(const Form &x);
		virtual ~Form();

		std::string getName() const;
		bool getSgd() const;
		int getSign() const;
		int getExecute() const;

		void beSigned(Bureaucrat &br);

		virtual void execute(const Bureaucrat &x) const = 0;

		class FormIsNotSigned : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

};

std::ostream &operator<<(std::ostream &ost, const Form &x);

#endif
