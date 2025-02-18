/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:52:03 by root              #+#    #+#             */
/*   Updated: 2025/02/15 19:48:00 by root             ###   ########.fr       */
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
    *this = src;
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
        this->_type = other._type;
    this->_brain = other._brain;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Hał Hał XDD" << std::endl;
}