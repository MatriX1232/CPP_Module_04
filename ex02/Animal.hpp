/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:32:53 by root              #+#    #+#             */
/*   Updated: 2025/02/18 13:47:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public:
        Animal(Animal const & src);
        virtual ~Animal();
        
        Animal & operator=(Animal const & rhs);
        
        virtual void makeSound() const;
    
    protected:
        Animal();
        std::string _type;
};

#endif