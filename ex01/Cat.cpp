/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:51:18 by root              #+#    #+#             */
/*   Updated: 2025/02/18 14:34:40 by msolinsk         ###   ########.fr       */
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
    this->_brain = new Brain(*src._brain); // Allocate new memory and copy
    this->_type = src._type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat& Cat::operator=(Cat const &other)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &other)
    {
        this->_type = other._type;
        if (this->_brain)
            delete this->_brain; // Free existing memory
        this->_brain = new Brain(*other._brain); // Allocate new memory and copy
    }
    return *this;
}
// because of the deep copy, we need to use "new"
            // Dog dog1;
            // Dog dog2 = dog1; // Uses copy constructor
            // dog2 = dog1;     // Uses assignment operator

void Cat::makeSound() const
{
    std::cout << "Miał Miał" << std::endl;
}

Brain   &Cat::getBrain() const
{
    return *this->_brain;
}