/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:32:53 by root              #+#    #+#             */
/*   Updated: 2025/02/18 14:08:34 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    public:
        Animal();
        Animal(Animal const & src);
        virtual ~Animal();
    
        Animal & operator=(Animal const & rhs);
    
        virtual void makeSound() const;
        virtual Brain &getBrain() const = 0;

        std::string getType() const;
        void setType(std::string type);
    
    protected:
        std::string _type;
};

#endif