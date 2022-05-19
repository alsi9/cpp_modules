/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 13:42:28 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/15 13:42:31 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	{
		int array[] = {1, 2, 3, 4, 5};

		std::cout << "-----INT-----" << std::endl;
		int size = sizeof(array) / sizeof(array[0]);
		iter(array, size, print);

		std::string arr[] = {"cat", "dog", "puppy"};

		std::cout << "-----STRING-----" << std::endl;
		int lenght = sizeof(arr) / sizeof(arr[0]);
		iter(arr, lenght, print);

		float ar[] = {1.09, 2.23, 3.56, 5.34};

		std::cout << "-----FLOAT-----" << std::endl;
		int number = sizeof(ar) / sizeof(ar[0]);
		iter(ar, number, print);
	}

//	{
//		int tab[] = {0, 1, 2, 3, 4};
//		Awesome tab2[5];
//
//		iter(tab, 5, print);
//		iter(tab2, 5, print);
//	}

    return (0);
}

