/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 18:00:00 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 18:00:04 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool sgd;
		const int sign;
		const int execute;

	public:
		Form();
		Form(const std::string nname, int ssign, int eexecute);
		Form(const Form &x);
		Form &operator=(const Form &x);
		~Form();

		std::string getName() const;
		bool getSgd() const;
		int getSign() const;
		int getExecute() const;

		void beSigned(Bureaucrat &br);

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
