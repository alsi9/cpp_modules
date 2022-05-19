/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:01:25 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 17:01:29 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void ft_replace(std::string *s, std::string replace, std::string replace_with)
{
    size_t pos;

    while ((pos = (*s).find(replace)) != std::string::npos)
    {
        (*s).erase(pos, replace.length());
        (*s).insert(pos, replace_with);
    }
}

int main(int argc, char **argv)
{
    if (argc != 4 || !argv[2][0] || !argv[3][0])
    {
        std::cout << "Error in program arguments!" << std::endl;
        return (1);
    }
    std::ifstream file(argv[1]);
    if (!file)
    {
        std::cout << "Error opening file!" << std::endl;
        return (1);
    }
    std::string newfilename = (std::string)argv[1] + ".replace";
    std::ofstream newfile(newfilename);
    if (!newfile)
    {
        std::cout << "Error opening newfile!" << std::endl;
        return (1);
    }
    std::string s;
    std::string replace = argv[2];
    std::string replace_with = argv[3];
	if (replace == replace_with)
		return (0);
    while (!(file.eof()))
    {
        getline(file, s);
        ft_replace(&s, replace, replace_with);
        newfile << s;
        if (!(file.eof()))
           newfile << std::endl;
    }
    file.close();
    newfile.close();
    return (0);
}

