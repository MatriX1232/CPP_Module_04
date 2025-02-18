/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:52:03 by root              #+#    #+#             */
/*   Updated: 2025/02/18 14:35:26 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <cstdio>
#include <cstdlib>

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
    if (this->_brain == NULL)
    {
        perror("ERROR: Brain alloc failed");
        exit(1);
    }
}

Dog::Dog(Dog const &src) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->_brain = new Brain(*src._brain); // Allocate new memory and copy
    this->_type = src._type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

Dog& Dog::operator=(Dog const &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
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

void Dog::makeSound() const
{
    std::cout << "Hał Hał XDD" << std::endl;
}

Brain   &Dog::getBrain() const
{
    return *this->_brain;
}