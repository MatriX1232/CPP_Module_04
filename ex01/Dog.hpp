/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msolinsk <msolinsk@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:51:37 by root              #+#    #+#             */
/*   Updated: 2025/02/18 14:31:21 by msolinsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &src);
        Dog& operator=(Dog const &other);
        virtual ~Dog();
    
        void makeSound() const;

        Brain   &getBrain() const;
    
    private:
        Brain   *_brain;
};

#endif