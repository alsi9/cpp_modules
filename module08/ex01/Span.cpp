/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:51:07 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/19 11:51:11 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int number) : N(number) {}

Span::Span(const Span &x)
{
	*this = x;
}

Span &Span::operator=(const Span &x)
{
	if (this == &x)
		return (*this);
	N = x.getN();
	arr = x.getArr();
	return (*this);
}

Span::~Span() {}

unsigned int Span::getN() const
{
	return (N);
}

std::vector<int> Span::getArr() const
{
	return (arr);
}

void Span::addNumber(int num)
{
	if (arr.size() >= N)
		throw Span::SpanFull();
	arr.push_back(num);
}

int Span::shortestSpan()
{
	if (arr.size() <= 1)
		throw Span::NoSpan();
	std::vector<int> sort_arr = arr;
	std::sort(sort_arr.begin(), sort_arr.end());

	int min_value = *std::max_element(sort_arr.begin(), sort_arr.end());

	for (unsigned int i = 0; i < sort_arr.size(); i++)
		if (i > 0 && std::abs(sort_arr[i] - sort_arr[i - 1]) < min_value)
			min_value = std::abs(sort_arr[i] - sort_arr[i - 1]);
	return (min_value);
}

int Span::longestSpan()
{
	if (arr.size() <= 1)
		throw Span::NoSpan();
	int min = *std::min_element(arr.begin(), arr.end());
	int max = *std::max_element(arr.begin(), arr.end());
	return (max - min);
}

const char *Span::SpanFull::what() const throw()
{
	return ("Span is full!");
}

const char *Span::NoSpan::what() const throw()
{
	return ("Not enough elements for a span!");
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (end <= start)
		return;
	for (std::vector<int>::iterator i = start; i != end; ++i)
		addNumber(*i);
}
