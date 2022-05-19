/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:59:41 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/13 17:59:44 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string name;
		int grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string nname, int grade);
		Bureaucrat(const Bureaucrat &x);
		Bureaucrat &operator=(const Bureaucrat &x);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade(void);
		void decrementGrade(void);

		void signForm(Form &form);

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &ost, const Bureaucrat &x);

#endif
