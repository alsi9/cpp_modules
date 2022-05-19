/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:50:24 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/19 11:50:28 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <array>

template <typename T>

bool easyfind(T &cont, int to_find)
{
	typename T::iterator i;

	i = std::find(cont.begin(), cont.end(), to_find);
	if (i == cont.end())
		return (false);
	else
		return (true);
}

#endif
