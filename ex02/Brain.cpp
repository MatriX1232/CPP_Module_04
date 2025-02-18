/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 19:47:34 by root              #+#    #+#             */
/*   Updated: 2025/02/18 13:37:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain()
{
    std::cout << "Default Brain contructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = other;
}

Brain   &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assigmen operator called" << std::endl;
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++)
    {
        if (other._ideas->length() > 0)
            this->_ideas[i] = other._ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Deconstructor called" << std::endl;
}
