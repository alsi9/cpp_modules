/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ephantom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 17:33:50 by ephantom          #+#    #+#             */
/*   Updated: 2022/05/11 17:33:53 by ephantom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain( std::string level );

private:
    void debug( void );
    void info( void );
    void warning ( void );
    void error ( void );
};

#endif
