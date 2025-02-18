/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:51:18 by root              #+#    #+#             */
/*   Updated: 2025/02/13 21:12:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <cstdio>
#include <cstdlib>

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
    if (this->_brain == NULL)
    {
        perror("ERROR: Brain alloc failed");
        exit(1);
    }
}

Cat::Cat(Cat const &src) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat & Cat::operator=(Cat const & other)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Miał Miał" << std::endl;
}